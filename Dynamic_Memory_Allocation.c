//YC-Bnagla coding tutor
//malloc() and calloc() return void pointer.So,we need to type cast it.
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr=(int*)malloc(5*sizeof(int));//5*4=20 byte
    if(ptr==NULL)
        printf("Memory not allocated.\n");
    else
        printf("Memory allocation successful.\n");
    return 0;
}*/
//Output: Memory allocation successful.


/*#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr=(int*)calloc(5,sizeof(int));
    if(ptr==NULL)
        printf("Memory not allocated.\n");
    else
        printf("Memory allocation successful.\n");
    return 0;
}*/
//Output: Memory allocation successful.


/*#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr=(int*)calloc(5,sizeof(int));
    if(ptr==NULL)
        printf("Memory not allocated.\n");
    else
    {
        printf("Memory allocation successful.\n");
        free(ptr);
        printf("Memory freed successfully.\n");
    }
    return 0;
}*/
//Output:
//Memory allocation successful.
//Memory freed successfully.


#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr1,*ptr2;
    ptr1=(int*)malloc(5*sizeof(int));
    ptr2=(int*)calloc(5,sizeof(int));
    if(ptr1==NULL || ptr2==NULL)
        printf("Memory not allocated.\n");
    else
    {
        printf("Memory allocation successful.\n");
        ptr1=realloc(ptr1,50);
        printf("Memory reallocation successful.\n");
    }
    return 0;
}
//Output:
//Memory allocation successful.
//Memory reallocation successful.