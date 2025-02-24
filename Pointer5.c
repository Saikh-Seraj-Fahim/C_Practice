//YC-freeCodeCamp.org
//Dynamic memory allocation in C
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    printf("Enter size of array:\n");
    scanf("%d",&n);
    int *A=(int*)malloc(n*sizeof(int));//dynamically allocated array
    for(i=0;i<n;++i)
    {
        A[i]=i+1;
    }
    for(i=0;i<n;++i)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}*/
// Output:
// Enter size of array:
// 6
// 1 2 3 4 5 6


/*#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    printf("Enter size of array:\n");
    scanf("%d",&n);
    int *A=(int*)calloc(n,sizeof(int));//dynamically allocated array
    for(i=0;i<n;++i)
    {
        A[i]=i+1;
    }
    for(i=0;i<n;++i)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}*/
// Output:
// Enter size of array:
// 6
// 1 2 3 4 5 6 


/*#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    printf("Enter size of array:\n");
    scanf("%d",&n);
    int *A=(int*)calloc(n,sizeof(int));//dynamically allocated array
    for(i=0;i<n;++i)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}*/
// Output:
// Enter size of array:
// 6
// 0 0 0 0 0 0

//calloc() initializes all values with 0


/*#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    printf("Enter size of array:\n");
    scanf("%d",&n);
    int *A=(int*)malloc(n*sizeof(int));//dynamically allocated array
    for(i=0;i<n;++i)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}*/
// Output:
// Enter size of array:
// 6
// 6629912 6619328 33554434 33197 6629912 6619328

//malloc() initializes with garbage value if not initialized


/*#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    printf("Enter size of array:\n");
    scanf("%d",&n);
    int *A=(int*)malloc(n*sizeof(int));//dynamically allocated array
    for(i=0;i<n;++i)
    {
        A[i]=i+1;
    }
    free(A);
    for(i=0;i<n;++i)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}*/
// Output:
// Enter size of array:
// 6
// 12331544 12320960 3 4 5 6 


/*#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    printf("Enter size of array:\n");
    scanf("%d",&n);
    int *A=(int*)malloc(n*sizeof(int));//dynamically allocated array
    for(i=0;i<n;++i)
    {
        A[i]=i+1;
    }
    free(A);
    A[2]=6;
    for(i=0;i<n;++i)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}*/
// Output:
// Enter size of array:
// 7
// 12853992 12850584 6 4 5 6 7


/*#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    printf("Enter size of array:\n");
    scanf("%d",&n);
    int *A=(int*)malloc(n*sizeof(int));//dynamically allocated array
    for(i=0;i<n;++i)
    {
        A[i]=i+1;
    }
    int *B=realloc(A,2*n*sizeof(int));
    printf("Previous block address=%d\n",A);
    printf("New block address=%d\n",B);
    for(i=0;i<2*n;++i)
    {
        printf("%d ",B[i]);
    }
    printf("\n");
}*/
// Output:
// Enter size of array:
// 7
// Previous block address=12593688
// New block address=12593688
// 1 2 3 4 5 6 7 12588456 620757029 22191 12591848 12588440 1818846815 1937071973


#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    printf("Enter size of array:\n");
    scanf("%d",&n);
    int *A=(int*)malloc(n*sizeof(int));//dynamically allocated array
    for(i=0;i<n;++i)
    {
        A[i]=i+1;
    }
    int *B=realloc(A,(n/2)*sizeof(int));
    printf("Previous block address=%d\n",A);
    printf("New block address=%d\n",B);
    for(i=0;i<n;++i)
    {
        printf("%d ",B[i]);
    }
    printf("\n");
}
// Output:
// Enter size of array:
// 8
// Previous block address=11282968
// New block address=11282968
// 1 2 3 4 697764648 27421 11281128 11277720


//int *B=realloc(A,(n/2)*sizeof(int));//free(A);
//int *B=realloc(NULL,n*sizeof(int));//equivalent to malloc(n*sizeof(int));






