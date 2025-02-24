//Source-gfg
/*#include <stdio.h>
#define INCREMENT(x) ++x
int main()
{
	char* ptr = "GeeksQuiz";
	int x = 10;
	printf("%s ", INCREMENT(ptr));
	printf("%d", INCREMENT(x));
	return 0;
}*/
//Output: eeksQuiz  11


/*#include <stdio.h>
#define MULTIPLY(a, b) a*b
int main()
{
	// The macro is expanded as 2 + 3 * 3 + 5, not as 5*8
	printf("%d", MULTIPLY(2 + 3, 3 + 5));
	return 0;
}*/
// Output: 16


/*#include <stdio.h>
// here, instead of writing a*b we write (a)*(b)
#define MULTIPLY(a, b) (a) * (b)
int main()
{
	// The macro is expanded as (2 + 3) * (3 + 5), as 5*8
	printf("%d", MULTIPLY(2 + 3, 3 + 5));
	return 0;
}*/
//Output: 40


/*#include <stdio.h>
#define merge(a, b) a##b //Token-Pasting operator
int main() 
{ 
    printf("%d ", merge(12, 34)); 
}*/
//Output: 1234


/*#include <stdio.h>
#define PRINT(i, limit)				\
	while (i < limit) {				\
		printf("GeeksQuiz ");		\
		i++;						\
	}
int main()
{
	int i = 0;
	PRINT(i, 3);
	return 0;
}*/
//Output:GeeksQuiz GeeksQuiz GeeksQuiz


/*#include <stdio.h>
#define square(x) x* x
int main()
{
	// Expanded as 36/6*6
	int x = 36 / square(6);
	printf("%d", x);
	return 0;
}*/
//Output:36

/*#include <stdio.h>
#define square(x) (x*x)
int main()
{
	// Expanded as 36/(6*6)
	int x = 36 / square(6);
	printf("%d", x);
	return 0;
}*/
//Output:1


/*#include <stdio.h>
static inline int square(int x) { return x * x; }
int main()
{
	int x = 36 / square(6);
	printf("%d", x);
	return 0;
}*/
//Output:1


/*#include <stdio.h>
int main()
{
	printf("Current File :%s\n", __FILE__);
	printf("Current Date :%s\n", __DATE__);
	printf("Current Time :%s\n", __TIME__);
	printf("Line Number :%d\n", __LINE__);
	return 0;
}*/
//Current File :Interesting_Facts_About_Macros_And_Preprocessors.c
//Current Date :Jun 30 2024
//Current Time :23:11:40   
//Line Number :101


#include <stdio.h>
// div function prototype
float div(float x, float y);
#define div(x, y) x/y
int main()
{
	// use of macro div
	// Note: %0.2f for taking two decimal value after point
	printf("%0.2f\n", div(10.0, 5.0));
// removing defined macro div
#undef div
	// function div is called as macro definition is removed
	printf("%0.2f\n", div(10.0, 5.0));
	return 0;
}
// div function definition
float div(float x, float y) 
{ 
    return y/x;
}
//Output:
//2.00
//0.50

