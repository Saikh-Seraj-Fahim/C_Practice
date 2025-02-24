//YC-freeCodeCamp.org
//Pointers as function arguments-call by reference
/*#include<stdio.h>
void increment(int a)
{
    a=a+1;
}
int main()
{
    int a=10;
    increment(a);//call by value
    printf("a=%d\n",a);
}*/
//Output: a=10


/*#include<stdio.h>
void increment(int *p)
{
    *p=*p+1;//a=a+1
}
int main()
{
    int a=10;
    increment(&a);//call by reference
    printf("a=%d\n",a);
}*/
//Output: a=11



//Pointers and arrays
//Source-Anisul Islam
/*#include<stdio.h>
int main()
{
    int i,A[]={2,4,5,8,1};
    int *p=&A[0];
    for(i=0;i<5;++i)
    {
        printf("%d ",*p);
        ++p;
    }
}*/
// Output:
// 2 4 5 8 1


//Source-freeCodeCamp.org
/*#include<stdio.h>
int main()
{
    int i,A[]={2,4,5,8,1};
    int *p=&A[0];
    printf("p=%d\n",p);
    printf("*p=%d\n",*p);
    printf("p+1=%d\n",p+1);
    printf("*(p+1)=%d\n",*(p+1));
    printf("p+2=%d\n",p+2);
    printf("*(p+2)=%d\n",*(p+2));
}*/
// Output:
// p=6422280
// *p=2
// p+1=6422284       
// *(p+1)=4
// p+2=6422288       
// *(p+2)=5

//Pointer arithmetic operates based on the size of the data type that the pointer 
//points to, not the size of the pointer itself. Source-Chatgpt.

#include<stdio.h>
int main()
{
    int A[]={2,4,5,8,1};
    printf("A=%d\n",A);//prints address of 1st element
    printf("&A=%d\n",&A);//prints address of 1st element
    printf("&A+1=%d\n",&A+1);
    printf("*A=%d\n",*A);//prints value of 1st element
    printf("&A[0]=%d\n",&A[0]);
    printf("A[0]=%d\n",A[0]);
    printf("A+1=%d\n",A+1);
    printf("A[0]+1=%d\n",A[0]+1);
    printf("Size of total array=%d\n",sizeof(A));
    printf("sizeof(*A)=%d\n",sizeof(*A));
    printf("sizeof(&A)=%d\n",sizeof(&A));
    printf("sizeof(A[0])=%d\n",sizeof(A[0]));
    printf("sizeof(&A[0])=%d\n",sizeof(&A[0]));
    printf("sizeof(&A+1)=%d\n",sizeof(&A+1));
}
// Output:
// A=6422284
// &A=6422284   
// &A+1=6422304 
// *A=2
// &A[0]=6422284
// A[0]=2       
// A+1=6422288  
// A[0]+1=3     
// Size of total array=20
// sizeof(*A)=4
// sizeof(&A)=4//In 64 bit compiler, this will be 8
// sizeof(A[0])=4//In 64 bit compiler, this will be 8
// sizeof(&A[0])=4//In 64 bit compiler, this will be 8
// sizeof(&A+1)=4



/*#include<stdio.h>
int main()
{
    int i,A[]={2,4,5,8,1};
    int *p=A;
    printf("A=%d\n",A);
    printf("*A=%d\n",*A);
    printf("A+1=%d\n",A+1);//A array er 1 index er address
    printf("*(A+1)=%d\n",*(A+1));//A array er 1 index er value
    printf("A+2=%d\n",A+2);
    printf("*(A+2)=%d\n",*(A+2));
}*/
// Output:
// A=6422280
// *A=2
// A+1=6422284       
// *(A+1)=4
// A+2=6422288       
// *(A+2)=5



/*#include<stdio.h>
int main()
{
    int i,A[]={2,4,5,8,1};
    for(i=0;i<5;++i)
    {
        printf("Address=%d\n",&A[i]);
        printf("Address=%d\n",A+i);//A array er i index er address
        printf("Value=%d\n",A[i]);
        printf("Value=%d\n",*(A+i));//A array er i index er value
    }
}*/
// Output:
// Address=6422280
// Address=6422280
// Value=2        
// Value=2        
// Address=6422284
// Address=6422284
// Value=4        
// Value=4        
// Address=6422288
// Address=6422288
// Value=5        
// Value=5        
// Address=6422292
// Address=6422292
// Value=8
// Value=8
// Address=6422296
// Address=6422296
// Value=1
// Value=1


