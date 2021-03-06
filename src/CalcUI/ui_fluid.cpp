// generated by Fast Light User Interface Designer (fluid) version 1.0304

#include "ui_fluid.h"
#include "Command.h"
#include "ui_callbacks.h"

Fl_Double_Window *calcwin=(Fl_Double_Window *)0;

static void cb_Basic(Fl_Menu_*, void*) {
  CalcUISendCommand(CalculationManager::Command::ModeBasic);
CalcUISwitchMode(CM_BASIC);
}

static void cb_Scientific(Fl_Menu_*, void*) {
  CalcUISendCommand(CalculationManager::Command::ModeScientific);
CalcUISwitchMode(CM_SCIENTIFIC);
}

static void cb_Programmer(Fl_Menu_*, void*) {
  CalcUISendCommand(CalculationManager::Command::ModeProgrammer);
CalcUISwitchMode(CM_PROGRAMMER);
}

Fl_Menu_Item menu_[] = {
 {"&Mode", 0,  0, 0, 64, (uchar)FL_NORMAL_LABEL, 0, 12, 0},
 {"&Basic", 0x80031,  (Fl_Callback*)cb_Basic, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 14, 0},
 {"&Scientific", 0x80032,  (Fl_Callback*)cb_Scientific, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 14, 0},
 {"&Programmer", 0x80033,  (Fl_Callback*)cb_Programmer, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 14, 0},
 {0,0,0,0,0,0,0,0,0},
 {"&Edit", 0,  0, 0, 64, (uchar)FL_NORMAL_LABEL, 0, 12, 0},
 {0,0,0,0,0,0,0,0,0},
 {"&Options", 0,  0, 0, 64, (uchar)FL_NORMAL_LABEL, 0, 12, 0},
 {0,0,0,0,0,0,0,0,0},
 {"&Help", 0,  0, 0, 64, (uchar)FL_NORMAL_LABEL, 0, 12, 0},
 {0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0}
};

Fl_Group *general_grp=(Fl_Group *)0;

static void cb_(Fl_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::CommandBACK);
}

static void cb_CE(Fl_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::CommandCENTR);
}

static void cb_C(Fl_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::CommandCLEAR);
}

static void cb_0(Fl_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::Command0);
}

static void cb_1(Fl_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::Command1);
}

static void cb_2(Fl_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::Command2);
}

static void cb_3(Fl_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::Command3);
}

static void cb_4(Fl_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::Command4);
}

static void cb_5(Fl_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::Command5);
}

static void cb_6(Fl_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::Command6);
}

static void cb_7(Fl_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::Command7);
}

static void cb_8(Fl_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::Command8);
}

static void cb_9(Fl_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::Command9);
}

static void cb_a(Fl_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::CommandPNT);
}

static void cb_b(Fl_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::CommandSIGN);
}

static void cb_MC(Fl_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::CommandMCLEAR);
}

Fl_Button *memory_recall=(Fl_Button *)0;

static void cb_memory_recall(Fl_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::CommandRECALL);
}

static void cb_MS(Fl_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::CommandSTORE);
}

static void cb_M(Fl_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::CommandMPLUS);
}

static void cb_M1(Fl_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::CommandMMINUS);
}

static void cb_c(Fl_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::CommandADD);
}

static void cb_d(Fl_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::CommandSUB);
}

static void cb_e(Fl_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::CommandMUL);
}

static void cb_f(Fl_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::CommandDIV);
}

static void cb_10(Fl_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::CommandSQRT);
}

static void cb_11(Fl_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::CommandPERCENT);
}

static void cb_12(Fl_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::CommandREC);
}

static void cb_13(Fl_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::CommandEQU);
}

Fl_Box *value_display=(Fl_Box *)0;

Fl_Group *binary_view=(Fl_Group *)0;

Fl_Group *scientific_grp=(Fl_Group *)0;

static void cb_sinh(Fl_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::CommandSINH);
}

static void cb_sin(Fl_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::CommandSIN);
}

static void cb_x(Fl_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::CommandSQR);
}

static void cb_Exp(Fl_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::CommandEXP);
}

static void cb_Mod(Fl_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::CommandMOD);
}

static void cb_log(Fl_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::CommandLOG);
}

static void cb_tanh(Fl_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::CommandTANH);
}

static void cb_tan(Fl_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::CommandTAN);
}

static void cb_x1(Fl_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::CommandCUB);
}

static void cb_cosh(Fl_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::CommandCOSH);
}

static void cb_cos(Fl_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::CommandCOS);
}

static void cb_x2(Fl_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::CommandPWR);
}

static void cb_n(Fl_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::CommandFAC);
}

static void cb_Inv(Fl_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::CommandINV);
}

static void cb_ln(Fl_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::CommandLN);
}

static void cb_14(Fl_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::CommandOPENP);
}

static void cb_15(Fl_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::CommandCLOSEP);
}

static void cb_101(Fl_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::CommandPOW10);
}

static void cb_31(Fl_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::CommandCUBEROOT);
}

static void cb_y(Fl_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::CommandROOT);
}

static void cb_Int(Fl_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::CommandCHOP);
}

static void cb_F(Fl_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::CommandFE);
}

static void cb_16(Fl_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::CommandPI);
}

static void cb_dms(Fl_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::CommandDMS);
}

Fl_Box *paren_view_sci=(Fl_Box *)0;

static void cb_Deg(Fl_Round_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::CommandDEG);
}

static void cb_Rad(Fl_Round_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::CommandRAD);
}

static void cb_Grad(Fl_Round_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::CommandGRAD);
}

Fl_Group *programmer_grp=(Fl_Group *)0;

static void cb_Hex(Fl_Round_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::CommandHex);
}

static void cb_Dec(Fl_Round_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::CommandDec);
}

static void cb_Oct(Fl_Round_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::CommandOct);
}

static void cb_Bin(Fl_Round_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::CommandBin);
}

static void cb_64(Fl_Round_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::CommandQword);
}

static void cb_32(Fl_Round_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::CommandDword);
}

static void cb_161(Fl_Round_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::CommandWord);
}

static void cb_81(Fl_Round_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::CommandByte);
}

static void cb_RoR(Fl_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::CommandROR);
}

static void cb_RoL(Fl_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::CommandROL);
}

static void cb_Or(Fl_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::CommandOR);
}

static void cb_Xor(Fl_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::CommandXor);
}

static void cb_Lsh(Fl_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::CommandLSHF);
}

static void cb_Rsh(Fl_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::CommandRSHF);
}

static void cb_Not(Fl_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::CommandNot);
}

static void cb_And(Fl_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::CommandAnd);
}

static void cb_17(Fl_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::CommandOPENP);
}

static void cb_18(Fl_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::CommandCLOSEP);
}

static void cb_Mod1(Fl_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::CommandMOD);
}

Fl_Box *paren_view_prg=(Fl_Box *)0;

static void cb_A(Fl_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::CommandA);
}

static void cb_B(Fl_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::CommandB);
}

static void cb_C1(Fl_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::CommandC);
}

static void cb_D(Fl_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::CommandD);
}

static void cb_E(Fl_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::CommandE);
}

static void cb_F1(Fl_Button*, void*) {
  CalcUISendCommand(CalculationManager::Command::CommandF);
}

Fl_Double_Window* make_window() {
  { calcwin = new Fl_Double_Window(215, 285, "Calculator");
    calcwin->labelfont(4);
    calcwin->labelsize(1420);
    { Fl_Menu_Bar* o = new Fl_Menu_Bar(0, 0, 480, 20);
      o->labelsize(12);
      o->menu(menu_);
    } // Fl_Menu_Bar* o
    { general_grp = new Fl_Group(10, 88, 195, 188);
      { Fl_Button* o = new Fl_Button(10, 120, 35, 28, "\342\206\220");
        o->shortcut(0xff08);
        o->labelfont(8);
        o->labelsize(20);
        o->callback((Fl_Callback*)cb_);
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(50, 120, 35, 28, "CE");
        o->shortcut(0xffff);
        o->labelsize(12);
        o->callback((Fl_Callback*)cb_CE);
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(90, 120, 35, 28, "C");
        o->shortcut(0xff1b);
        o->labelsize(12);
        o->callback((Fl_Callback*)cb_C);
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(10, 248, 75, 28, "0");
        o->shortcut(0x30);
        o->labelsize(15);
        o->callback((Fl_Callback*)cb_0);
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(10, 216, 35, 28, "1");
        o->shortcut(0x31);
        o->labelsize(15);
        o->callback((Fl_Callback*)cb_1);
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(50, 216, 35, 28, "2");
        o->shortcut(0x32);
        o->labelsize(15);
        o->callback((Fl_Callback*)cb_2);
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(90, 216, 35, 28, "3");
        o->shortcut(0x33);
        o->labelsize(15);
        o->callback((Fl_Callback*)cb_3);
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(10, 184, 35, 28, "4");
        o->shortcut(0x34);
        o->labelsize(15);
        o->callback((Fl_Callback*)cb_4);
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(50, 184, 35, 28, "5");
        o->shortcut(0x35);
        o->labelsize(15);
        o->callback((Fl_Callback*)cb_5);
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(90, 184, 35, 28, "6");
        o->shortcut(0x36);
        o->labelsize(15);
        o->callback((Fl_Callback*)cb_6);
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(10, 152, 35, 28, "7");
        o->shortcut(0x37);
        o->labelsize(15);
        o->callback((Fl_Callback*)cb_7);
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(50, 152, 35, 28, "8");
        o->shortcut(0x38);
        o->labelsize(15);
        o->callback((Fl_Callback*)cb_8);
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(90, 152, 35, 28, "9");
        o->shortcut(0x39);
        o->labelsize(15);
        o->callback((Fl_Callback*)cb_9);
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(90, 248, 35, 28, ".");
        o->shortcut(0x2e);
        o->labelsize(15);
        o->callback((Fl_Callback*)cb_a);
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(130, 120, 35, 28, "\302\261");
        o->shortcut(0xffc6);
        o->labelsize(12);
        o->callback((Fl_Callback*)cb_b);
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(10, 88, 35, 28, "MC");
        o->shortcut(0x4006c);
        o->labelsize(12);
        o->callback((Fl_Callback*)cb_MC);
      } // Fl_Button* o
      { memory_recall = new Fl_Button(50, 88, 35, 28, "MR");
        memory_recall->shortcut(0x40072);
        memory_recall->labelsize(12);
        memory_recall->callback((Fl_Callback*)cb_memory_recall);
      } // Fl_Button* memory_recall
      { Fl_Button* o = new Fl_Button(90, 88, 35, 28, "MS");
        o->shortcut(0x4006d);
        o->labelsize(12);
        o->callback((Fl_Callback*)cb_MS);
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(130, 88, 35, 28, "M+");
        o->shortcut(0x40070);
        o->labelsize(12);
        o->callback((Fl_Callback*)cb_M);
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(170, 88, 35, 28, "M-");
        o->shortcut(0x40071);
        o->labelsize(12);
        o->callback((Fl_Callback*)cb_M1);
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(130, 248, 35, 28, "+");
        o->shortcut(0x2b);
        o->labelsize(12);
        o->callback((Fl_Callback*)cb_c);
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(130, 216, 35, 28, "-");
        o->shortcut(0x2d);
        o->labelsize(12);
        o->callback((Fl_Callback*)cb_d);
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(130, 184, 35, 28, "*");
        o->shortcut(0x2a);
        o->labelsize(12);
        o->callback((Fl_Callback*)cb_e);
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(130, 152, 35, 28, "/");
        o->shortcut(0x2f);
        o->labelsize(12);
        o->callback((Fl_Callback*)cb_f);
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(170, 120, 35, 28, "\342\210\232");
        o->shortcut(0x40);
        o->labelsize(12);
        o->callback((Fl_Callback*)cb_10);
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(170, 152, 35, 28, "%");
        o->shortcut(0x25);
        o->labelsize(12);
        o->callback((Fl_Callback*)cb_11);
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(170, 184, 35, 28, "1/x");
        o->shortcut(0x72);
        o->labelsize(12);
        o->callback((Fl_Callback*)cb_12);
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(170, 216, 35, 60, "=");
        o->shortcut(0x3d);
        o->labelsize(20);
        o->callback((Fl_Callback*)cb_13);
      } // Fl_Button* o
      general_grp->end();
    } // Fl_Group* general_grp
    { value_display = new Fl_Box(10, 28, 195, 50);
      value_display->box(FL_DOWN_BOX);
      value_display->color(FL_BACKGROUND2_COLOR);
      value_display->labelfont(4);
      value_display->labelsize(20);
      value_display->align(Fl_Align(FL_ALIGN_BOTTOM_RIGHT|FL_ALIGN_INSIDE));
    } // Fl_Box* value_display
    { // binary view
      binary_view = new Fl_Group(10, 88, 385, 62);
      binary_view->box(FL_DOWN_BOX);
      binary_view->hide();
      binary_view->end();
    } // Fl_Group* binary_view
    { // mode-dependent
      scientific_grp = new Fl_Group(10, 159, 195, 189);
      scientific_grp->hide();
      { Fl_Button* o = new Fl_Button(50, 224, 35, 28, "sinh");
        o->shortcut(0x40073);
        o->labelsize(12);
        o->callback((Fl_Callback*)cb_sinh);
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(90, 224, 35, 28, "sin");
        o->shortcut(0x73);
        o->labelsize(12);
        o->callback((Fl_Callback*)cb_sin);
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(130, 224, 35, 28, "x^2");
        o->shortcut(0x71);
        o->labelsize(12);
        o->callback((Fl_Callback*)cb_x);
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(50, 320, 35, 28, "Exp");
        o->shortcut(0x78);
        o->labelsize(12);
        o->callback((Fl_Callback*)cb_Exp);
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(90, 320, 35, 28, "Mod");
        o->shortcut(0x64);
        o->labelsize(12);
        o->callback((Fl_Callback*)cb_Mod);
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(130, 320, 35, 28, "log");
        o->shortcut(0x6c);
        o->labelsize(12);
        o->callback((Fl_Callback*)cb_log);
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(50, 288, 35, 28, "tanh");
        o->shortcut(0x40074);
        o->labelsize(12);
        o->callback((Fl_Callback*)cb_tanh);
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(90, 288, 35, 28, "tan");
        o->shortcut(0x74);
        o->labelsize(12);
        o->callback((Fl_Callback*)cb_tan);
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(130, 288, 35, 28, "x^3");
        o->shortcut(0x23);
        o->labelsize(12);
        o->callback((Fl_Callback*)cb_x1);
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(50, 256, 35, 28, "cosh");
        o->shortcut(0x4006f);
        o->labelsize(12);
        o->callback((Fl_Callback*)cb_cosh);
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(90, 256, 35, 28, "cos");
        o->shortcut(0x6f);
        o->labelsize(12);
        o->callback((Fl_Callback*)cb_cos);
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(130, 256, 35, 28, "x^y");
        o->shortcut(0x79);
        o->labelsize(12);
        o->callback((Fl_Callback*)cb_x2);
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(170, 224, 35, 28, "n!");
        o->shortcut(0x21);
        o->labelsize(12);
        o->callback((Fl_Callback*)cb_n);
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(50, 192, 35, 28, "Inv");
        o->shortcut(0x69);
        o->labelsize(12);
        o->callback((Fl_Callback*)cb_Inv);
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(90, 192, 35, 28, "ln");
        o->shortcut(0x6e);
        o->labelsize(12);
        o->callback((Fl_Callback*)cb_ln);
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(130, 192, 35, 28, "(");
        o->shortcut(0x28);
        o->labelsize(12);
        o->callback((Fl_Callback*)cb_14);
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(170, 192, 35, 28, ")");
        o->shortcut(0x29);
        o->labelsize(12);
        o->callback((Fl_Callback*)cb_15);
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(170, 320, 35, 28, "10^x");
        o->shortcut(0x40067);
        o->labelsize(12);
        o->callback((Fl_Callback*)cb_101);
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(170, 288, 35, 28, "3\342\210\232x");
        o->shortcut(0x40062);
        o->labelsize(12);
        o->callback((Fl_Callback*)cb_31);
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(170, 256, 35, 28, "y\342\210\232x");
        o->shortcut(0x40079);
        o->labelsize(12);
        o->callback((Fl_Callback*)cb_y);
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(10, 224, 35, 28, "Int");
        o->shortcut(0x3b);
        o->labelsize(12);
        o->callback((Fl_Callback*)cb_Int);
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(10, 320, 35, 28, "F-E");
        o->shortcut(0x76);
        o->labelsize(12);
        o->callback((Fl_Callback*)cb_F);
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(10, 288, 35, 28, "\317\200");
        o->shortcut(0x70);
        o->labelsize(12);
        o->callback((Fl_Callback*)cb_16);
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(10, 256, 35, 28, "dms");
        o->shortcut(0x6d);
        o->labelsize(12);
        o->callback((Fl_Callback*)cb_dms);
      } // Fl_Button* o
      { paren_view_sci = new Fl_Box(10, 192, 35, 28);
        paren_view_sci->box(FL_DOWN_BOX);
        paren_view_sci->align(Fl_Align(FL_ALIGN_CLIP));
      } // Fl_Box* paren_view_sci
      { Fl_Group* o = new Fl_Group(10, 160, 195, 28);
        o->box(FL_DOWN_BOX);
        { Fl_Round_Button* o = new Fl_Round_Button(15, 167, 55, 15, "Deg");
          o->shortcut(0xffc0);
          o->down_box(FL_ROUND_DOWN_BOX);
          o->value(1);
          o->labelsize(12);
          o->callback((Fl_Callback*)cb_Deg);
        } // Fl_Round_Button* o
        { Fl_Round_Button* o = new Fl_Round_Button(80, 167, 55, 15, "Rad");
          o->shortcut(0xffc1);
          o->down_box(FL_ROUND_DOWN_BOX);
          o->labelsize(12);
          o->callback((Fl_Callback*)cb_Rad);
        } // Fl_Round_Button* o
        { Fl_Round_Button* o = new Fl_Round_Button(145, 167, 55, 15, "Grad");
          o->shortcut(0xffc2);
          o->down_box(FL_ROUND_DOWN_BOX);
          o->labelsize(12);
          o->callback((Fl_Callback*)cb_Grad);
        } // Fl_Round_Button* o
        o->end();
      } // Fl_Group* o
      scientific_grp->end();
    } // Fl_Group* scientific_grp
    { // mode-dependent
      programmer_grp = new Fl_Group(10, 158, 195, 189);
      programmer_grp->hide();
      { Fl_Group* o = new Fl_Group(10, 159, 65, 92);
        o->box(FL_DOWN_BOX);
        { Fl_Round_Button* o = new Fl_Round_Button(15, 165, 55, 15, "Hex");
          o->type(102);
          o->shortcut(0xffc2);
          o->down_box(FL_ROUND_DOWN_BOX);
          o->labelsize(12);
          o->callback((Fl_Callback*)cb_Hex);
          o->align(Fl_Align(68|FL_ALIGN_INSIDE));
        } // Fl_Round_Button* o
        { Fl_Round_Button* o = new Fl_Round_Button(15, 187, 55, 15, "Dec");
          o->type(102);
          o->shortcut(0xffc3);
          o->down_box(FL_ROUND_DOWN_BOX);
          o->value(1);
          o->labelsize(12);
          o->callback((Fl_Callback*)cb_Dec);
          o->align(Fl_Align(68|FL_ALIGN_INSIDE));
        } // Fl_Round_Button* o
        { Fl_Round_Button* o = new Fl_Round_Button(15, 209, 55, 15, "Oct");
          o->type(102);
          o->shortcut(0xffc4);
          o->down_box(FL_ROUND_DOWN_BOX);
          o->labelsize(12);
          o->callback((Fl_Callback*)cb_Oct);
          o->align(Fl_Align(68|FL_ALIGN_INSIDE));
        } // Fl_Round_Button* o
        { Fl_Round_Button* o = new Fl_Round_Button(15, 231, 55, 15, "Bin");
          o->type(102);
          o->shortcut(0xffc5);
          o->down_box(FL_ROUND_DOWN_BOX);
          o->labelsize(12);
          o->callback((Fl_Callback*)cb_Bin);
          o->align(Fl_Align(68|FL_ALIGN_INSIDE));
        } // Fl_Round_Button* o
        o->end();
      } // Fl_Group* o
      { Fl_Group* o = new Fl_Group(10, 255, 65, 92);
        o->box(FL_DOWN_BOX);
        { Fl_Round_Button* o = new Fl_Round_Button(15, 262, 55, 15, "64 bit");
          o->type(102);
          o->shortcut(0xffc9);
          o->down_box(FL_ROUND_DOWN_BOX);
          o->value(1);
          o->labelsize(12);
          o->callback((Fl_Callback*)cb_64);
          o->align(Fl_Align(68|FL_ALIGN_INSIDE));
        } // Fl_Round_Button* o
        { Fl_Round_Button* o = new Fl_Round_Button(15, 283, 55, 15, "32 bit");
          o->type(102);
          o->shortcut(0xffbf);
          o->down_box(FL_ROUND_DOWN_BOX);
          o->labelsize(12);
          o->callback((Fl_Callback*)cb_32);
          o->align(Fl_Align(68|FL_ALIGN_INSIDE));
        } // Fl_Round_Button* o
        { Fl_Round_Button* o = new Fl_Round_Button(15, 305, 55, 15, "16 bit");
          o->type(102);
          o->shortcut(0xffc0);
          o->down_box(FL_ROUND_DOWN_BOX);
          o->labelsize(12);
          o->callback((Fl_Callback*)cb_161);
          o->align(Fl_Align(68|FL_ALIGN_INSIDE));
        } // Fl_Round_Button* o
        { Fl_Round_Button* o = new Fl_Round_Button(15, 327, 55, 15, "8 bit");
          o->type(102);
          o->shortcut(0xffc1);
          o->down_box(FL_ROUND_DOWN_BOX);
          o->labelsize(12);
          o->callback((Fl_Callback*)cb_81);
          o->align(Fl_Align(68|FL_ALIGN_INSIDE));
        } // Fl_Round_Button* o
        o->end();
      } // Fl_Group* o
      { Fl_Button* o = new Fl_Button(80, 223, 35, 28, "RoR");
        o->shortcut(0x6b);
        o->labelsize(12);
        o->callback((Fl_Callback*)cb_RoR);
        o->align(Fl_Align(FL_ALIGN_CLIP));
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(120, 223, 35, 28, "RoL");
        o->shortcut(0x6a);
        o->labelsize(12);
        o->callback((Fl_Callback*)cb_RoL);
        o->align(Fl_Align(FL_ALIGN_CLIP));
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(80, 255, 35, 28, "Or");
        o->shortcut(0x7c);
        o->labelsize(12);
        o->callback((Fl_Callback*)cb_Or);
        o->align(Fl_Align(FL_ALIGN_CLIP));
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(120, 255, 35, 28, "Xor");
        o->shortcut(0x5e);
        o->labelsize(12);
        o->callback((Fl_Callback*)cb_Xor);
        o->align(Fl_Align(FL_ALIGN_CLIP));
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(80, 287, 35, 28, "Lsh");
        o->shortcut(0x3c);
        o->labelsize(12);
        o->callback((Fl_Callback*)cb_Lsh);
        o->align(Fl_Align(FL_ALIGN_CLIP));
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(120, 287, 35, 28, "Rsh");
        o->shortcut(0x3e);
        o->labelsize(12);
        o->callback((Fl_Callback*)cb_Rsh);
        o->align(Fl_Align(FL_ALIGN_CLIP));
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(80, 319, 35, 28, "Not");
        o->shortcut(0x7e);
        o->labelsize(12);
        o->callback((Fl_Callback*)cb_Not);
        o->align(Fl_Align(FL_ALIGN_CLIP));
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(120, 319, 35, 28, "And");
        o->shortcut(0x26);
        o->labelsize(12);
        o->callback((Fl_Callback*)cb_And);
        o->align(Fl_Align(FL_ALIGN_CLIP));
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(80, 191, 35, 28, "(");
        o->shortcut(0x28);
        o->labelsize(12);
        o->callback((Fl_Callback*)cb_17);
        o->align(Fl_Align(FL_ALIGN_CLIP));
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(120, 191, 35, 28, ")");
        o->shortcut(0x29);
        o->labelsize(12);
        o->callback((Fl_Callback*)cb_18);
        o->align(Fl_Align(FL_ALIGN_CLIP));
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(120, 159, 35, 28, "Mod");
        o->shortcut(0x25);
        o->labelsize(12);
        o->callback((Fl_Callback*)cb_Mod1);
        o->align(Fl_Align(FL_ALIGN_CLIP));
      } // Fl_Button* o
      { paren_view_prg = new Fl_Box(80, 159, 35, 28);
        paren_view_prg->box(FL_DOWN_BOX);
        paren_view_prg->align(Fl_Align(FL_ALIGN_CLIP));
      } // Fl_Box* paren_view_prg
      { Fl_Button* o = new Fl_Button(170, 159, 35, 28, "A");
        o->labelsize(15);
        o->callback((Fl_Callback*)cb_A);
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(170, 191, 35, 28, "B");
        o->labelsize(15);
        o->callback((Fl_Callback*)cb_B);
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(170, 223, 35, 28, "C");
        o->labelsize(15);
        o->callback((Fl_Callback*)cb_C1);
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(170, 255, 35, 28, "D");
        o->labelsize(15);
        o->callback((Fl_Callback*)cb_D);
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(170, 287, 35, 28, "E");
        o->labelsize(15);
        o->callback((Fl_Callback*)cb_E);
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(170, 319, 35, 28, "F");
        o->labelsize(15);
        o->callback((Fl_Callback*)cb_F1);
      } // Fl_Button* o
      programmer_grp->end();
    } // Fl_Group* programmer_grp
    calcwin->end();
  } // Fl_Double_Window* calcwin
  return calcwin;
}
