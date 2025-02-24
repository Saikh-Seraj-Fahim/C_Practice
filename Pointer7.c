//YC-freeCodeCamp.org
//Function pointers and call-backs
/*#include<stdio.h>
void A()
{
    printf("Hello World\n");
}
void B(void (*ptr)())
{
    ptr();
}
int main()
{
    void (*p)();//void (*p)()=A;
    p=&A;
    B(p);
}*/
//Output:Hello World


/*#include<stdio.h>
void A()
{
    printf("Hello World\n");
}
void B(void (*ptr)())
{
    ptr();
}
int main()
{
    B(A);
}*/
//Output:Hello World


//Jokhon kono function theke onno function parameter hisebe pathano hoi,oi function 
//ke receive kore function pointer.Then function pointer oi function ke point kore
//thake.


/*#include<stdio.h>
void BubbleSort(int *B,int n)//(int B[],int n)
{
    int i,j,temp;
    for(i=0;i<n;++i)
    {
        for(j=0;j<n-1;++j)
        {
            if(B[j]>B[j+1])
            {
                temp=B[j];
                B[j]=B[j+1];
                B[j+1]=temp;
            }
        }
    }
}
int main()
{
    int i,A[]={3,1,2,5,6,4};
    BubbleSort(A,6);//BubbleSort(&A[0],6);
    for(i=0;i<6;++i)
        printf("%d ",A[i]);
}*/
//Output:1 2 3 4 5 6


/*#include<stdio.h>
void BubbleSort(int *B,int n)//(int B[],int n)
{
    int i,j,temp;
    for(i=0;i<n;++i)
    {
        for(j=0;j<n-1;++j)
        {
            if(B[j]<B[j+1])
            {
                temp=B[j];
                B[j]=B[j+1];
                B[j+1]=temp;
            }
        }
    }
}
int main()
{
    int i,A[]={3,1,2,5,6,4};
    BubbleSort(A,6);//BubbleSort(&A[0],6);
    for(i=0;i<6;++i)
        printf("%d ",A[i]);
}*/
//Output:6 5 4 3 2 1


#include<stdio.h>
int compare(int a,int b)//call-back function
{
    if(a>b)
        return 1;
    else
        return -1;
}
void BubbleSort(int *B,int n,int (*ptr)(int,int))
{
    int i,j,temp;
    for(i=0;i<n;++i)
    {
        for(j=0;j<n-1;++j)
        {
            if(ptr(B[j],B[j+1])>0)
            {
                temp=B[j];
                B[j]=B[j+1];
                B[j+1]=temp;
            }
        }
    }
}
int main()
{
    int i,A[]={3,1,2,5,6,4};
    BubbleSort(A,6,compare);
    for(i=0;i<6;++i)
        printf("%d ",A[i]);
}
//Output:1 2 3 4 5 6


/*#include<stdio.h>
int compare(int a,int b)//call-back function
{
    if(a>b)
        return -1;
    else
        return 1;
}
void BubbleSort(int *B,int n,int (*ptr)(int,int))
{
    int i,j,temp;
    for(i=0;i<n;++i)
    {
        for(j=0;j<n-1;++j)
        {
            if(ptr(B[j],B[j+1])>0)
            {
                temp=B[j];
                B[j]=B[j+1];
                B[j+1]=temp;
            }
        }
    }
}
int main()
{
    int i,A[]={3,1,2,5,6,4};
    BubbleSort(A,6,compare);
    for(i=0;i<6;++i)
        printf("%d ",A[i]);
}*/
//Output:6 5 4 3 2 1


/*#include<stdio.h>
#include<stdlib.h>
int compare(int a,int b)//call-back function
{
    if(abs(a)>abs(b))
        return 1;
    else
        return -1;
}
void Sort(int *B,int n,int (*ptr)(int,int))
{
    int i,j,temp;
    for(i=0;i<n;++i)
    {
        for(j=0;j<n-1;++j)
        {
            if(ptr(B[j],B[j+1])>0)
            {
                temp=B[j];
                B[j]=B[j+1];
                B[j+1]=temp;
            }
        }
    }
}
int main()
{
    int i,A[]={-31,22,-1,50,-6,4};
    Sort(A,6,compare);
    for(i=0;i<6;++i)
        printf("%d ",A[i]);
}*/
//Output:-1 4 -6 22 -31 50 (sorting according to absolute value)


/*#include<stdio.h>
#include<stdlib.h>
int compare(int a,int b)//call-back function
{
    if(abs(a)>abs(b))
        return -1;
    else
        return 1;
}
void Sort(int *B,int n,int (*ptr)(int,int))
{
    int i,j,temp;
    for(i=0;i<n;++i)
    {
        for(j=0;j<n-1;++j)
        {
            if(ptr(B[j],B[j+1])>0)
            {
                temp=B[j];
                B[j]=B[j+1];
                B[j+1]=temp;
            }
        }
    }
}
int main()
{
    int i,A[]={-31,22,-1,50,-6,4};
    Sort(A,6,compare);
    for(i=0;i<6;++i)
        printf("%d ",A[i]);
}*/
//Output:50 -31 22 -6 4 -1 (sorting according to absolute value)


/*#include<stdio.h>
#include<stdlib.h>
int compare(const void *a,const void *b)
{
    int A=*((int*)a);
    int B=*((int*)b);
    return A-B;
}
int main()
{
    int i,A[]={-31,22,-1,50,-6,4};
    qsort(A,6,sizeof(int),compare);
    for(i=0;i<6;++i)
        printf("%d ",A[i]);
}*/
//Output:-31 -6 -1 4 22 50


/*#include<stdio.h>
#include<stdlib.h>
int compare(const void *a,const void *b)
{
    int A=*((int*)a);
    int B=*((int*)b);
    return B-A;
}
int main()
{
    int i,A[]={-31,22,-1,50,-6,4};
    qsort(A,6,sizeof(int),compare);
    for(i=0;i<6;++i)
        printf("%d ",A[i]);
}*/
//Output:50 22 4 -1 -6 -31


/*#include<stdio.h>
#include<stdlib.h>
int compare(const void *a,const void *b)
{
    int A=*((int*)a);
    int B=*((int*)b);
    return abs(A)-abs(B);
}
int main()
{
    int i,A[]={-31,22,-1,50,-6,4};
    qsort(A,6,sizeof(int),compare);
    for(i=0;i<6;++i)
        printf("%d ",A[i]);
}*/
//Output:-1 4 -6 22 -31 50


/*#include<stdio.h>
#include<stdlib.h>
int compare(const void *a,const void *b)
{
    int A=*((int*)a);
    int B=*((int*)b);
    return abs(B)-abs(A);
}
int main()
{
    int i,A[]={-31,22,-1,50,-6,4};
    qsort(A,6,sizeof(int),compare);
    for(i=0;i<6;++i)
        printf("%d ",A[i]);
}*/
//Output:50 -31 22 -6 4 -1
