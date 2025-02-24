//Source-GFG
// C Program to access array elements using pointer
/*#include <stdio.h>
void geeks()
{
    int val[3] = { 5, 10, 15 };
    int* p;
    p=val;
    printf("Elements of the array are: ");
    printf("%d, %d, %d", p[0], p[1], p[2]);
    return;
}
int main()
{
    geeks();
    return 0;
}*/
// Output:
// Elements of the array are: 5, 10, 15


// pointer increment and decrement
//pointers are incremented and decremented by the size of the data type they point to 
/*#include <stdio.h>
int main()
{
	int a=22;
	int *p=&a;
	printf("p = %u\n", p); // p = 6422288 -int
	p++;
	printf("p++ = %u\n", p); //p++ = 6422292 +4 // 4 bytes
	p--;
	printf("p-- = %u\n", p); //p-- = 6422288	 -4 // restored to original value

	float b=22.22;
	float *q=&b;
	printf("q = %u\n", q); //q = 6422284 -float
	q++;
	printf("q++ = %u\n", q); //q++ = 6422288	 +4 // 4 bytes
	q--;
	printf("q-- = %u\n", q); //q-- = 6422284	 -4 // restored to original value

	char c='a';
	char *r=&c;
	printf("r = %u\n", r); //r = 6422283 -char
	r++;
	printf("r++ = %u\n", r); //r++ = 6422284	 +1 // 1 byte
	r--;
	printf("r-- = %u\n", r); //r-- = 6422283	 -1 // restored to original value
	return 0;
}*/
// Output:
// p = 6422288
// p++ = 6422292
// p-- = 6422288
// q = 6422284  
// q++ = 6422288
// q-- = 6422284
// r = 6422283  
// r++ = 6422284
// r-- = 6422283


// C program to illustrate pointer Addition
/*#include <stdio.h>
int main()
{
	int N = 4;
	int *p1, *p2;
	p1 = &N;
	p2 = &N;

	printf("Pointer ptr2 before Addition:\n");
	printf("%d \n", p2);
	printf("%p \n", p2);

	p2=p2+3;
	printf("Pointer ptr2 after Addition:\n");
	printf("%d \n", p2);
	printf("%p \n", p2);
	return 0;
}*/
// Output:
// Pointer ptr2 before Addition:
// 6422292 
// 0061FF14 
// Pointer ptr2 after Addition:
// 6422304 
// 0061FF20 


// C program to illustrate pointer Subtraction
/*#include <stdio.h>
int main()
{
	int N=4;
	int *p1, *p2;
	p1=&N;
	p2=&N;

	printf("Pointer p2 before Subtraction: ");
	printf("%d \n", p2);

	p2 = p2-3;
	printf("Pointer p2 after Subtraction: ");
	printf("%d \n", p2);
	return 0;
}*/
// Output:
// Pointer p2 before Subtraction: 6422292 
// Pointer p2 after Subtraction: 6422280


// C program to illustrate Subtraction
// of two pointers
/*#include <stdio.h>
int main()
{
	int x=6;
	int N=4;
	int *p1,*p2;
	p1=&N;
	p2=&x;
	printf("p1 = %u, p2 = %u\n", p1, p2);
	// %p gives an hexa-decimal value,
	// We convert it into an unsigned int value by using %u

	x=p2-p1;
	printf("Subtraction of p2 & p1 is %d\n",x);
	return 0;
}*/
// Output:
// p1 = 6422288, p2 = 6422292
// Subtraction of p2 & p1 is 1


// C program to illustrate the array
// traversal using pointers
/*#include <stdio.h>
int main()
{
	int N=5;
	int arr[]={1,2,3,4,5};
	int* p;
	p=arr;
	for(int i=0;i<N;i++) 
    {
		printf("%d ", p[0]);
		p++;
	}
}*/
// Output: 1 2 3 4 5 


// C program to illustrate the array
// traversal using pointers in 2D array
/*#include <stdio.h>
// Function to traverse 2D array
// using pointers
void traverseArr(int* arr, int N, int M)
{
	int i,j;
	// Traverse rows of 2D matrix
	for(i=0;i<N;i++){
		// Traverse columns of 2D matrix
		for(j=0;j<M;j++){
			// Print the element
			printf("%d ", *((arr+i*M)+j));
		}
		printf("\n");
	}
}
int main()
{
	int N=3,M=2;
	int arr[][2]={{1,2},{3,4},{5,6}};
	traverseArr((int*)arr, N, M);
	return 0;
}*/
// Output:
// 1 2 
// 3 4 
// 5 6


// C program to understand difference between pointer to an integer and pointer to 
//an array of integers. 
/*#include<stdio.h>
int main()
{
    int *p;
    int ar[5];
    // Pointer to an array of 5 integers 
    int (*ptr)[5];
    // Points to 0th element of the arr.
    p=ar;
    // Points to the whole array arr.
    ptr=&ar; 
    printf("p=%d, ptr=%d\n", p, ptr);
    p++; 
    ptr++;
    printf("p=%d, ptr=%d\n", p, ptr);
    return 0;
}*/
// Output:
// p=6422276, ptr=6422276
// p=6422280, ptr=6422296


// C program to illustrate sizes of
// pointer of array
#include<stdio.h>
int main()
{
    int ar[]={3,5,6,7,9};
    int *p=ar;
    int (*ptr)[5]=&ar;
    
    printf("p=%d, ptr=%d\n", p, ptr);
    printf("*p=%d, *ptr=%d, **ptr=%d\n", *p, *ptr, **ptr);
    
    printf("sizeof(p)=%lu, sizeof(*p)=%lu\n",sizeof(p), sizeof(*p));
    printf("sizeof(ptr)=%lu, sizeof(*ptr)=%lu\n", sizeof(ptr), sizeof(*ptr));
    return 0;
}
// Output:
// p=6422276, ptr=6422276
// *p=3, *ptr=6422276, **ptr=3   
// sizeof(p)=4, sizeof(*p)=4     
// sizeof(ptr)=4, sizeof(*ptr)=20


// C program to print the elements of 3-D
// array using pointer notation
/*#include<stdio.h>
int main()
{
  int arr[2][3][2] = {
                       {
                         {5, 10},
                         {6, 11},
                         {7, 12},
                       },
                       {
                         {20, 30},
                         {21, 31},
                         {22, 32},
                       }
                     };
  int i,j,k;
  for(i=0;i<2;i++)
  {
    for(j=0;j<3;j++)
    {
       for(k=0;k<2;k++)
       		printf("%d\t", *(*(*(arr+i)+j)+k));
       printf("\n");
    }
  }
  return 0;
}*/
// Output:
// 5       10        
// 6       11       
// 7       12        
// 20      30        
// 21      31        
// 22      32  










