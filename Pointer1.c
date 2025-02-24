//YC-freeCodeCamp.org
/*#include<stdio.h>
int main()
{
    int a=10;
    int *p;
    p=&a;
    printf("%d\n",p);
    printf("%d\n",*p);
    printf("%d\n",&a);
}*/
//Output:
//6422296
//10
//6422296


/*#include<stdio.h>
int main()
{
    int a=10;
    int *p;
    p=&a;
    printf("a=%d\n",a);
    *p=12; //*p=a
    printf("a=%d\n",a);
}*/
//Output:
//a=10
//a=12


/*#include<stdio.h>
int main()
{
    int a=10;
    int *p;
    p=&a;//int *p=&a;
    printf("Address of p is:%d\n",p);
    printf("Value of p is:%d\n",*p);
    int b=20;
    *p=b; //a=b;
    printf("Address of p is:%d\n",p);
    printf("Value of p is:%d\n",*p);
}*/
//Output:
//Address of p is:6422292
//Value of p is:10       
//Address of p is:6422292
//Value of p is:20


/*#include<stdio.h>
int main()
{
    int a=10;
    int *p;
    p=&a;//int *p=&a;
    //pointer arithmetic
    printf("Address p is:%d\n",p);
    printf("Value at address p is:%d\n",*p);
    printf("Address p+1 is:%d\n",p+1);
    printf("Value at address p+1 is:%d\n",*(p+1));
}*/
//Output:
//Address p is:6422296
//Value at address p is:10       
//Address p+1 is:6422300
//Value at address p+1 is:6422296



//Pointers to pointers
#include<stdio.h>
int main()
{
    int x=5;
    int *p=&x;//p is pointing x
    *p=6;//x=6
    int **q=&p;//q is pointing p
    int ***r=&q;//r is pointing q
    printf("x=%d\n",x);
    printf("&x=%d\n",&x);
    printf("p=%d\n",p);
    printf("*p=%d\n",*p);
    printf("Size of Pointer p:%d\n", sizeof(p));
    printf("*q=%d\n",*q);
    printf("**q=%d\n",**q);
    printf("Size of Pointer q:%d\n", sizeof(q));
    printf("**r=%d\n",**r);
    printf("***r=%d\n",***r);
    printf("Size of Pointer r:%d\n", sizeof(r));
    ***r=10;//x=10
    printf("x=%d\n",x);
    **q=*p+2;//x=x+2
    printf("x=%d\n",x);
}
// Output:
// x=6
// &x=6422296
// p=6422296
// *p=6
// Size of Pointer p:4
// *q=6422296
// **q=6
// Size of Pointer q:4
// **r=6422296
// ***r=6
// Size of Pointer r:4
// x=10
// x=12