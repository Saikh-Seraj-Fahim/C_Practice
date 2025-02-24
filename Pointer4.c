//YC-freeCodeCamp.org
//Character arrays and pointers-part-1
/*#include<stdio.h>
int main()
{
    char s[4];
    s[0]='J';
    s[1]='O';
    s[2]='H';
    s[3]='N';
    printf("%s\n",s);
}*/
//Output:JOHN♀ a


/*#include<stdio.h>
int main()
{
    char s[5];//n size er string e (n-1) ta character rakha jabe.1 ta index null character er jonno.
    s[0]='J';
    s[1]='O';
    s[2]='H';
    s[3]='N';
    s[4]='\0';
    printf("%s\n",s);
}*/
//Output:JOHN


/*#include<stdio.h>
#include<string.h>
int main()
{
    int len;
    char s[20];
    s[0]='J';
    s[1]='O';
    s[2]='H';
    s[3]='N';
    s[4]='\0';
    len=strlen(s);
    printf("Length=%d\n",len);
}*/
//Output:Length=4 //null character bad diye length mapa hoi.


/*#include<stdio.h>
#include<string.h>
int main()
{
    int len;
    char s[20]="JOHN";//evabe string declare korle automatically last e null character bosiye nei.
    printf("Size in bytes=%d\n",sizeof(s));
    len=strlen(s);
    printf("Length=%d\n",len);
}*/
// Output:
// Size in bytes=20
// Length=4


/*#include<stdio.h>
#include<string.h>
int main()
{
    int len;
    char s[]="JOHN";//char s[5]={'J','O','H','N','\0'};
    printf("Size in bytes=%d\n",sizeof(s));
    len=strlen(s);
    printf("Length=%d\n",len);
}*/
// Output:
// Size in bytes=5
// Length=4


/*#include<stdio.h>
#include<string.h>
int main()
{
    int len;
    char s[]={'J','O','H','N','\0'};
    printf("Size in bytes=%d\n",sizeof(s));
    len=strlen(s);
    printf("Length=%d\n",len);
}*/
// Output:
// Size in bytes=5
// Length=4


/*#include<stdio.h>
#include<string.h>
int main()
{
    int len;
    char s[]={'J','O','H','N'};
    printf("Size in bytes=%d\n",sizeof(s));
    len=strlen(s);
    printf("Length=%d\n",len);
}*/
// Output:
// Size in bytes=4
// Length=5


/*#include<stdio.h>
int main()
{
    int i;
    char s1[]="Hello";
    char *s2;
    s2=&s1[0];//s2=s1;
    printf("s2=%s\n",s2);
    printf("s2[1]=%c\n",s2[1]);
    printf("s1[4]=%c , s2[4]=%c\n",s1[4],s2[4]);

    for(i=0;i<5;++i)
        printf("%c ",*(s1+i));//s1 string er i index er value.
    printf("\n");

    for(i=0;i<5;++i)
        printf("%c ",*(s2+i));
    printf("\n");

    s2[0]='N';
    printf("s1=%s\n",s1);
    printf("s2=%s\n",s2);
}*/
// Output:
// s2=Hello
// s2[1]=e
// s1[4]=o , s2[4]=o 
// H e l l o         
// H e l l o         
// s1=Nello
// s2=Nello


//Though the pointer pointing to the 1st index of the string,but the printf() 
//function with format specifier(%s) moves to the next index because it uses pointer 
//arithmetic (pointer incrementing) to traverse the string character by character 
//untill it reaches the null terminator. This is a fundamental aspect of how strings 
//are handled in C, leveraging the null-terminated nature of strings and the power of 
//pointers.
//Source-chatgpt.


/*#include<stdio.h>
int main()
{
    int i;
    char s1[]="Hello";
    char *s2;
    s2=&s1[0];//s2=s1;
    for(i=0;i<5;++i)
    {
        printf("%c ",*s2);
        ++s2;
    }
    printf("\n");
}*/
//Output:H e l l o 


/*#include<stdio.h>
void print(char s1[])
{
    printf("s1=%s\n",s1);
    int i=0;
    while(s1[i]!='\0')
    {
        printf("%c ",s1[i]);
        ++i;
    }
}
int main()
{
    char s[]="Hello";
    print(s);
}*/
// Output:
// s1=Hello
// H e l l o


/*#include<stdio.h>
void print(char *s1)
{
    printf("s1=%s\n",s1);
    int i=0;
    while(*(s1+i)!='\0')
    {
        printf("%c ",*(s1+i));
        ++i;
    }
}
int main()
{
    char s[]="Hello";
    print(&s[0]);//print(s);
}*/
// Output:
// s1=Hello
// H e l l o


/*#include<stdio.h>
void print(char *s1)
{
    printf("s1=%s\n",s1);
    while(*s1!='\0')
    {
        printf("%c ",*s1);
        ++s1;
    }
}
int main()
{
    char s[]="Hello";
    print(&s[0]);//print(s);
}*/
// Output:
// s1=Hello
// H e l l o



//YC-freeCodeCamp.org
//Character arrays and pointers-part-2
/*#include<stdio.h>
void print(char *s1)
{
    printf("s1=%s\n",s1);
    while(*s1!='\0')
    {
        printf("%c ",*s1);
        ++s1;
    }
}
int main()
{
    char *s="Hello";//string gets stored as compile time constant
    printf("s=%s\n",s);
    //If we declare:char *s="Hello",we can not write s[0]='N' to modify it to "Nello".
    //It will give segmentation fault.

    print(s);//print(&s[0]);
}*/
// Output:
// s=Hello
// s1=Hello
// H e l l o


//Though the pointer pointing to the 1st index of the string,but the printf() 
//function with format specifier(%s) moves to the next index because it uses pointer 
//arithmetic (pointer incrementing) to traverse the string character by character 
//untill it reaches the null terminator. This is a fundamental aspect of how strings 
//are handled in C, leveraging the null-terminated nature of strings and the power of 
//pointers.
//Source-chatgpt.


/*#include<stdio.h>
void print(char *s1)
{
    s1[0]='N';//This statement is not correct.So,this portion is not giving any output.
    //If we declare:char *s="Hello",we can not write s[0]='N' to modify it to "Nello".
    printf("s1=%s\n",s1);
    while(*s1!='\0')
    {
        printf("%c ",*s1);
        ++s1;
    }
}
int main()
{
    char *s="Hello";//string gets stored as compile time constant
    printf("s=%s\n",s);
    print(s);//print(&s[0]);
}*/
//Output:s=Hello



//YC-freeCodeCamp.org
//Pointers and 2D arrays
/*#include<stdio.h>
int main()
{
    int B[2][3]={{2,3,6},
                 {4,5,8}
                };
    //printf("%d\n",B[1][1]);//5
    printf("B=%d\n",B);

    printf("\n");
    printf("*B=%d\n",*B);
    printf("*(*B)=%d\n",*(*B));
    printf("B[0]=%d\n",B[0]);
    printf("&B[0][0]=%d\n",&B[0][0]);

    printf("\n");
    printf("B+1=%d\n",B+1);
    printf("&B[1]=%d\n",&B[1]);

    printf("\n");
    printf("*(B+1)=%d\n",*(B+1));
    printf("*(*(B+1))=%d\n",*(*(B+1)));
    printf("B[1]=%d\n",B[1]);
    printf("&B[1][0]=%d\n",&B[1][0]);

    printf("\n");
    printf("*(B+1)+2=%d\n",*(B+1)+2);
    printf("*(*(B+1)+2)=%d\n",*(*(B+1)+2));
    printf("B[1]+2=%d\n",B[1]+2);
    printf("&B[1][2]=%d\n",&B[1][2]);

    printf("\n");
    printf("*(*B+1)=%d\n",*(*B+1));
}*/

// Output:
// B=6422280

// *B=6422280      
// *(*B)=2
// B[0]=6422280    
// &B[0][0]=6422280

// B+1=6422292     
// &B[1]=6422292   

// *(B+1)=6422292  
// *(*(B+1))=4     
// B[1]=6422292
// &B[1][0]=6422292

// *(B+1)+2=6422300
// *(*(B+1)+2)=8
// B[1]+2=6422300
// &B[1][2]=6422300

// *(*B+1)=3


// C program to print elements of a 2-D array 
// by scripting a pointer to an array
//Source-GFG
#include<stdio.h>
int main()
{
  int ar[3][4]={ 
                    {10, 11, 12, 13},
                    {20, 21, 22, 23},
                    {30, 31, 32, 33}
                };
  int (*p)[4];
  p=ar;
  printf("%d %d %d\n", p, p+1, p+2);
  printf("%d %d %d\n", *p, *(p+1), *(p+2));
  printf("%d %d %d\n", **p, **(p+1), **(p+2));
  printf("%d %d %d\n", *(*(p+0)+2), *(*(p+1)+2), *(*(p+2)+3));
  printf("%d %d %d\n", *(p+0)+2, *(p+1)+2, *(p+2)+3);
  printf("%d %d %d\n", p[0][0], p[1][2], p[2][3]);
  return 0;
}
// Output:
// 6422252 6422268 6422284
// 6422252 6422268 6422284
// 10 20 30
// 12 22 33
// 6422260 6422276 6422296
// 10 22 33



//Pointers and multi dimensional arrays
/*#include<stdio.h>
int main()
{
    int C[3][2][2]={{{2,5},{7,9}},
                    {{3,4},{6,1}},
                    {{0,8},{11,13}}
                   };
    printf("C[1][1][0]=%d\n",C[1][1][0]);//6
    printf("C=%d *C=%d C[0]=%d &C[0][0]=%d &C[0][0][0]=%d\n",C,*C,C[0],&C[0][0],&C[0][0][0]);
    printf("*(C[0][0]+1)=%d\n",*(C[0][0]+1));

    printf("\n");
    printf("*(C[0][1]+1)=%d\n",*(C[0][1]+1));
    printf("C[0][1][1]=%d\n",C[0][1][1]);

    printf("\n");
    printf("*(C[1]+1)=%d\n",*(C[1]+1));
    printf("C[1][1]=%d\n",C[1][1]);
    printf("&C[1][1][0]=%d\n",&C[1][1][0]);
}*/
// Output:
// C=6422256 *C=6422256 C[0]=6422256 &C[0][0]=6422256 &C[0][0][0]=6422256
// *(C[0][0]+1)=5     

// *(C[0][1]+1)=9     
// C[0][1][1]=9       

// *(C[1]+1)=6422280  
// C[1][1]=6422280    
// &C[1][1][0]=6422280




