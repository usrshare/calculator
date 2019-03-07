//#include <stdint.h>


#define _In_
#define _In_opt_
#define __in_opt
#define _Inout_
#define _Out_

#define S_OK 0
#define E_BOUNDS 0x8000000B
#define E_OUTOFMEMORY 0x80070006

#define SUCCEEDED(hr) (((HRESULT)hr) >= 0)
#define FAILED(hr) (((HRESULT)hr) < 0)

#define HIDWORD(qw) ((qw) >> 32)
#define LODWORD(qw) ((qw) & 0xFFFFFFFF)	

#define ARRAYSIZE(a) ( sizeof(a) / sizeof(*a) )

#define SCODE_CODE(sc) ((sc) & 0xFFFF)

typedef unsigned char BYTE;
typedef unsigned short WORD;
typedef int INT;
typedef unsigned short WPARAM;
typedef int HRESULT;
typedef unsigned int DWORD;
typedef unsigned long long DWORDLONG;
typedef unsigned long long ULONGLONG;
typedef long long LONGLONG;
typedef unsigned long ULONG;
typedef long LONG;

// https://github.com/dotnet/coreclr/blob/master/src/pal/inc/rt/intsafe.h
#define INTSAFE_E_ARITHMETIC_OVERFLOW ((HRESULT)0x80070216L) // 0x216 = 534 = ERROR_ARITHMETIC_OVERFLOW 

#define __inline inline

HRESULT ULongAdd( ULONG ulAugend, ULONG ulAddend, ULONG *pulResult);

HRESULT ULongMult( ULONG ulA, ULONG ulB, ULONG *pulR);
