//YC-freeCodeCamp.org
//Pointers as function returns
/*#include<stdio.h>
int Add(int a,int b)
{
    int c=a+b;
    return c;
}
int main()
{
    int a=2,b=4;
    int z=Add(a,b);
    printf("Sum=%d\n",z);
}*/
//Output:Sum=6


/*#include<stdio.h>
int Add(int a,int b)
{
    printf("Address of a in Add=%d\n",&a);
    int c=a+b;
    return c;
}
int main()
{
    int a=2,b=4;
    printf("Address of a in main=%d\n",&a);
    int c=Add(a,b);
    printf("Sum=%d\n",c);
}*/
// Output:
// Address of a in main=6422292
// Address of a in Add=6422272
// Sum=6


/*#include<stdio.h>
int Add(int *a,int *b)
{
    printf("Address of a in Add=%d\n",&a);
    printf("a=%d\n",a);
    printf("*a=%d\n",*a);
    int c=(*a)+(*b);
    return c;
}
int main()
{
    int a=2,b=4;
    printf("Address of a in main=%d\n",&a);
    int c=Add(&a,&b);
    printf("Sum=%d\n",c);
}*/
// Output:
// Address of a in main=6422296
// Address of a in Add=6422272
// a=6422296
// *a=2
// Sum=6


//Kono function theke parameter hisebe address pathale, oi address ke receive kore 
//pointer.


/*#include<stdio.h>
int* Add(int *a,int *b)
{
    int c=(*a)+(*b);
    return &c;
}
int main()
{
    int a=2,b=4;
    int *p=Add(&a,&b);
    printf("Sum=%d\n",*p);
}*/
//Output:This code will show error.


//Correct form of above code.
/*#include<stdio.h>
void Add(int *a,int *b,int *c)
{
    *c=(*a)+(*b);
}
int main()
{
    int a=2,b=4,sum;
    Add(&a,&b,&sum);
    printf("Sum=%d\n",sum);
}*/
//Output:Sum=6


/*#include<stdio.h>
void PrintHelloWorld()
{
    printf("Hello World.\n");
}
void Add(int *a,int *b,int *c)
{
    *c=(*a)+(*b);
}
int main()
{
    int a=2,b=4,sum;
    Add(&a,&b,&sum);
    PrintHelloWorld();
    printf("Sum=%d\n",sum);
}*/
// Output:
// Hello World.
// Sum=6


/*#include<stdio.h>
void PrintHelloWorld()
{
    printf("Hello World.\n");
}
int* Add(int *a,int *b)
{
    int c=(*a)+(*b);
    return &c;
}
int main()
{
    int a=2,b=4;
    int *p=Add(&a,&b);
    PrintHelloWorld();
    printf("Sum=%d\n",*p);
}*/
//Output:Hello World.


#include<stdio.h>
#include<stdlib.h>
void PrintHelloWorld()
{
    printf("Hello World.\n");
}
int* Add(int *a,int *b)
{
    int *c=(int*)malloc(sizeof(int));
    *c=(*a)+(*b);
    return c;
}
int main()
{
    int a=2,b=4;
    int *p=Add(&a,&b);
    PrintHelloWorld();
    printf("Sum=%d\n",*p);
}
// Output:
// Hello World.
// Sum=6




//YC-freeCodeCamp.org
//Function Pointers in C/C++
/*#include<stdio.h>
int Add(int a,int b)
{
    return a+b;
}
int main()
{
    int c;
    int (*p)(int,int);//Function pointer
    p=&Add; //p=Add;
    c=(*p)(2,3); //c=p(2,3);
    printf("Sum=%d\n",c);
}*/
//Output:Sum=5


/*#include<stdio.h>
int Add(int a,int b)
{
    return a+b;
}
int main()
{
    int c;
    int (*p)(int,int);//Function pointer
    p=Add;//p=&Add;
    c=p(2,3);
    printf("Sum=%d\n",c);
}*/
//Output:Sum=5


/*#include<stdio.h>
void PrintHello()
{
    printf("Hello World\n");
}
int main()
{
    void (*p)();//Function pointer
    p=&PrintHello;//p=PrintHello;
    p();//(*p)();
}*/
//Output:Hello World


/*#include<stdio.h>
void PrintHello(char *name)
{
    printf("Hello %s\n",name);
}
int main()
{
    void (*p)(char*);//Function pointer
    p=&PrintHello;//p=PrintHello;
    p("Fahim");//(*p)("Fahim");
}*/
//Output:Hello Fahim


