//YC-freeCodeCamp.org
//Arrays as function arguments
/*#include<stdio.h>
int SumOfElements(int B[])//int B[] or int *B is same
{
    int i,size,sum=0;
    size=sizeof(B)/sizeof(B[0]);
    printf("SOE-Size of B=%d , size of B[0]=%d\n",sizeof(B),sizeof(B[0]));
    for(i=0;i<size;++i)
        sum=sum+B[i];//B[i] is *(B+i)
    return sum;
}
int main()
{
    int A[]={1,2,3,4,5};
    int i,size,sum=0,total;
    size=sizeof(A)/sizeof(A[0]);
    for(i=0;i<size;++i)
        sum=sum+A[i];
    printf("Sum of elements=%d\n",sum);
    printf("Main-Size of A=%d , size of A[0]=%d\n",sizeof(A),sizeof(A[0]));

    total=SumOfElements(A);//SumOfElements(&A[0]) or SumOfElements(A) is same
    printf("Sum of elements=%d\n",total);
}*/
// Output:
// Sum of elements=15
// Main-Size of A=20 , size of A[0]=4
// SOE-Size of A=4 , size of A[0]=4
// Sum of elements=1

//When an array is passed as function arguments,that Array is always sent as reference.
//It is call by reference. 



#include<stdio.h>
int SumOfElements(int B[],int size)//(int *B,int size)
{
    int i,sum=0;
    printf("SOE-Size of B=%d , size of B[0]=%d\n",sizeof(B),sizeof(B[0]));
    for(i=0;i<size;++i)
        sum=sum+B[i];//sum=sum+*(B+i);
    return sum;
}
int main()
{
    int A[]={1,2,3,4,5};
    int i,size,sum=0,total;
    size=sizeof(A)/sizeof(A[0]);
    for(i=0;i<size;++i)
        sum=sum+A[i];
    printf("Sum of elements=%d\n",sum);
    printf("Main-Size of A=%d , size of A[0]=%d\n",sizeof(A),sizeof(A[0]));

    total=SumOfElements(A,size);//SumOfElements(&A[0],size);
    printf("Sum of elements=%d\n",total);
}
// Output:
// Sum of elements=15
// Main-Size of A=20 , size of A[0]=4
// SOE-Size of B=4 , size of B[0]=4
// Sum of elements=15



/*#include<stdio.h>
void Double(int B[],int size)//void Double(int *B,int size)
{
    int i;
    for(i=0;i<size;++i)
        B[i]=2*B[i];//B[i]=2*(*(B+i));
}
int main()
{
    int A[]={1,2,3,4,5};
    int i,size;
    size=sizeof(A)/sizeof(A[0]);
    Double(A,size);//Double(&A[0],size) or Double(A,size) is same
    for(i=0;i<size;++i)
        printf("%d ",A[i]);
}*/
// Output:
// 2 4 6 8 10


//When an array is passed as function arguments,that Array is always sent as reference.
//It is call by reference.
//Main function theke jokhon array ke parameter hisebe pathano hoi,tokhon asol e full
//array pathano hoi na.Just array er 1st element er address pathano hoi(&A[0]),then
//i er sahajje index bariye ba pointer increment kore porer element gula ke access kora
//hoi.