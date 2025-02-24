//Source-gfg
// C Program to illustrate the macro
/*#include <stdio.h>
// macro definition
#define LIMIT 5
int main()
{
	for (int i = 0; i < LIMIT; i++) {
		printf("%d \n", i);
	}
	return 0;
}*/


// C Program to illustrate function like macros
/*#include <stdio.h>
// macro with parameter
#define AREA(l, b) (l * b)
int main()
{
	int l1 = 10, l2 = 5, area;
	area = AREA(l1, l2);
	printf("Area of rectangle is: %d", area);
	return 0;
}*/


//program to demonstrates the use of #if, #elif, #else,
// and #endif preprocessor directives.
/*#include <stdio.h>
#define PI 3.14159
int main()
{
#ifdef PI
	printf("PI is defined\n");
#elif SQUARE
	printf("Square is defined\n");
#else
	#error "Neither PI nor SQUARE is defined"
#endif
#ifndef SQUARE
	printf("Square is not defined"); 
#else
	cout << "Square is defined" << endl;
#endif
	return 0;
}*/


/*#include <stdio.h>
// defining MIN_VALUE
#define MIN_VALUE 10
int main() {
	// Undefining and redefining MIN_VALUE
printf("Min value is: %d\n",MIN_VALUE);
//undefining max value 
#undef MIN_VALUE
// again redefining MIN_VALUE 
#define MIN_VALUE 20
	printf("Min value after undef and again redefining it: %d\n", MIN_VALUE);
	return 0;
}*/


// C program to illustrate the #pragma exit and pragma
// startup
/*#include <stdio.h>
void func1();
void func2();
// specifying funct1 to execute at start
#pragma startup func1
// specifying funct2 to execute before end
#pragma exit func2
void func1() 
{ 
	printf("Inside func1()\n"); 
}
void func2() 
{ 
	printf("Inside func2()\n"); 
}
int main()
{
	void func1();
	void func2();
	printf("Inside main()\n");
	return 0;
}*/
//#pragma does not work in GCC Compiler.
//If it would not be GCC Compiler, the output would be:
//Inside func1()
//Inside main()
//Inside func2()


// C program to demonstrate the use of conditional
// directives.
#include <stdio.h>
#define gfg 7
#if gfg > 200
#undef gfg
#define gfg 200
#elif gfg < 50
#undef gfg
#define gfg 50
#else
#undef gfg
#define gfg 100
#endif

void printValue(int v) 
{ 
	printf("%d\n", v);
}

int main()
{
    printValue(gfg); // gfg = 50
    return 0;
}
//Output:50




