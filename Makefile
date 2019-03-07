-include Makefile.cfg
OBJDIR=obj
SRCDIR=src

CFLAGS+=-D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_THREAD_SAFE -D_REENTRANT
CXXFLAGS+=-D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_THREAD_SAFE -D_REENTRANT
LDFLAGS+=`fltk-config --ldflags --use-images` `libpng-config --ldflags`
PREFIX=

CC=$(PREFIX)gcc -include src/win.h
CXX=$(PREFIX)g++ -include src/win.h
LD=$(PREFIX)ld

CFLAGS+=-g -std=c17 -Wall
CXXFLAGS+=-g -std=c++17 -Wall -Isrc/CalcManager/
LIBS+=-g -pthread

DEFS+= -D_POSIX_C_SOURCE=200809L

_OBJS = win.cpp.o CalcManager/ExpressionCommand.cpp.o CalcManager/CEngine/CalcInput.cpp.o CalcManager/CEngine/CalcUtils.cpp.o CalcManager/CEngine/History.cpp.o CalcManager/CEngine/Number.cpp.o CalcManager/CEngine/Rational.cpp.o CalcManager/CEngine/RationalMath.cpp.o CalcManager/CEngine/calc.cpp.o CalcManager/CEngine/scicomm.cpp.o CalcManager/CEngine/scidisp.cpp.o CalcManager/CEngine/scifunc.cpp.o CalcManager/CEngine/scioper.cpp.o CalcManager/CEngine/sciset.cpp.o CalcManager/Ratpack/conv.cpp.o CalcManager/Ratpack/rat.cpp.o CalcManager/Ratpack/logic.cpp.o CalcManager/Ratpack/support.cpp.o CalcManager/Ratpack/exp.cpp.o CalcManager/Ratpack/fact.cpp.o CalcManager/Ratpack/trans.cpp.o CalcManager/Ratpack/itrans.cpp.o CalcManager/Ratpack/transh.cpp.o CalcManager/Ratpack/itransh.cpp.o CalcManager/Ratpack/num.cpp.o CalcManager/Ratpack/basex.cpp.o CalcManager/EngineStrings.cpp.o main.cpp.o 


ifdef PROFILE
DEFS += -pg
LDFLAGS += -pg
endif

ifdef RELEASE
CFLAGS += -msse3 -O3 -DNDEBUG
CXXFLAGS += -msse3 -O3 -DNDEBUG
else
endif

OBJS = $(patsubst %,$(OBJDIR)/%,$(_OBJS))

all: calc

calc: $(OBJS)
	$(CXX) -o $@ $^ $(LIBS) $(LDFLAGS)
ifdef RELEASE
ifndef PROFILE
	strip $@
endif
endif

$(OBJDIR)/%.cpp.o: $(SRCDIR)/%.cpp | $(OBJDIR)
	$(CXX) -c -o $@ $(CXXFLAGS) $< $(DEFS)

$(OBJDIR)/%.c.o: $(SRCDIR)/%.c | $(OBJDIR)
	$(CC) -c -o $@ $(CFLAGS) $< $(DEFS)

$(DOCDIR):
	mkdir $(DOCDIR)

$(OBJDIR):
	mkdir $(OBJDIR)

clean:
	find $(OBJDIR) -name *.o -type f | xargs /bin/rm -f
