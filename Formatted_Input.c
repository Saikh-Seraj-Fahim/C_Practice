//Source-Ansi C Book
#include<stdio.h>
int main()
{
    int a,b,c,x,y,z,p,q,r;
    printf("Enter 3 integer numbers:\n");
    scanf("%d %*d %d",&a,&b,&c);
    printf("%d %d %d \n\n",a,b,c);
    printf("Enter two 4-digit numbers:\n");
    scanf("%2d %4d",&x,&y);
    printf("%d %d \n\n",x,y);
    printf("Enter 2 integers:\n");
    scanf("%d %d",&a,&x);
    printf("%d %d \n\n",a,x);
    printf("Enter a 9 digit number:\n");
    scanf("%3d %4d %3d",&p,&q,&r);
    printf("%d %d %d \n\n",p,q,r);
    printf("Enter two 3-digit numbers:\n");
    scanf("%d %d",&x,&y);
    printf("%d %d \n\n",x,y);
}
// Output:
// Enter 3 integer numbers:
// 1 2 3
// 1 3 0 

// Enter two 4-digit numbers:
// 3852 9537
// 38 52 

// Enter 2 integers:
// 64 97
// 9537 64 

// Enter a 9 digit number:
// 123456789
// 97 1234 567 

// Enter two 3-digit numbers:
// 853 323
// 89 853


/*#include<stdio.h>
int main()
{
    float x,y;
    double p,q;
    printf("Values of x and y:");
    scanf("%f %e",&x,&y);
    printf("\n");
    printf("x=%f\n y=%f\n\n",x,y);
    printf("Values of p and q:");
    scanf("%lf %lf",&p,&q);
    printf("\n p=%.12lf\n q=%.12e",p,q);
}*/
//Output:
// Values of x and y:12.3456 17.5e-2

// x=12.345600       
//  y=0.175000       

// Values of p and q:4.142857142857 18.5678901234567890

//  p=4.142857142857
//  q=1.856789012346e+001


/*#include<stdio.h>
int main()
{
    int no;
    char name1[15],name2[15],name3[15];
    printf("Enter serial number and name one:\n");
    scanf("%d %15c",&no,name1);
    printf("%d %15s\n\n",no,name1);
    printf("Enter serial number and name two:\n");
    scanf("%d %s",&no,name2);
    printf("%d %15s\n\n",no,name2);
    printf("Enter serial number and name three:\n");
    scanf("%d %15s",&no,name3);
    printf("%d %15s\n\n",no,name3);
}*/
// Output1:
// Enter serial number and name one:
// 1 123456789012345
// 1 123456789012345☺

// Enter serial number and name two:
// 2 New York
// 2             New

// Enter serial number and name three:
// 2


// Output2:
// Enter serial number and name one:
// 1 12345678901234
// 1 12345678901234
// ☺

// Enter serial number and name two:
// 2 New-York
// 2        New-York

// Enter serial number and name three:
// 3 London
// 3          London


/*#include<stdio.h>
int main()
{
    char address[80];
    printf("Enter address:\n");
    scanf("%[ a-z A-Z 0-5]",address);//space,a-z,A-Z,0-5
    printf("%s \n\n",address);
}*/
// Enter address:
// NEW delhi 5302741
// Output:NEW delhi 5302  


/*#include<stdio.h>
int main()
{
    char address[80];
    printf("Enter address:\n");
    scanf("%[^\n]",address);
    printf("%s \n\n",address);
}*/
// Enter address:
// New Delhi 110 002
// Output:New Delhi 110 002


/*#include<stdio.h>
int main()
{
    int a;
    float b;
    char c;
    printf("Enter values of a,b and c:\n");
    if(scanf("%d %f %c",&a,&b,&c)==3)
        printf("a=%d b=%f c=%c",a,b,c);
    else
        printf("Error in input.\n");
}*/
// Output:
// Enter values of a,b and c:
// 12 3.45 A
// a=12 b=3.450000 c=A

// Enter values of a,b and c:
// 23 78 9
// a=23 b=78.000000 c=9

// Enter values of a,b and c:
// 8 A 5.25
// Error in input. 

// Enter values of a,b and c:
// Y 12 67
// Error in input.

// Enter values of a,b and c:
// 15.75 23 X
// a=15 b=0.750000 c=2


//Self.
/*#include<stdio.h>
int main()
{
    int a,p;
    float b;
    char c;
    char s[50];
    printf("Enter values:\n");
    p=scanf("%d %f %c %s",&a,&b,&c,s);
    printf("%d\n",p);
}*/
// Enter values:
// 6 3.12 u fahim
// Output:4