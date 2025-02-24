// Source-Javatpoint.
/*#include <stdio.h>
int main()
{
    int n; // variable declaration
    printf("Enter the number of bits you want to enter : ");
    scanf("%d",&n);
    char binary[n+1];         // binary array declaration;
    char onescomplement[n+1]; // onescomplement array declaration
    char twoscomplement[n+1]; // twoscomplement array declaration
    int carry=1;              // variable initialization
    printf("Enter the binary number : ");
    scanf("%s",binary);
    printf("The ones complement of the binary number is : ");

    // Finding onescomplement in C
    for(int i=0;i<n;i++)
    {
        if (binary[i]=='0')
            onescomplement[i]='1';
        else if(binary[i]=='1')
            onescomplement[i]='0';
    }
    onescomplement[n]='\0';
    printf("%s\n",onescomplement);

    printf("The twos complement of the binary number is : ");

    // Finding twoscomplement in C
    for(int i=n-1;i>=0;i--)
    {
        if(onescomplement[i]=='1' && carry==1)
        {
            twoscomplement[i]='0';
            carry=1;
        }
        else if(onescomplement[i]=='0' && carry==1)
        {
            twoscomplement[i]='1';
            carry=0;
        }
        else if(onescomplement[i]=='0' && carry==0)
        {
            twoscomplement[i]='0';
            carry=0;
        }
        else if(onescomplement[i]=='1' && carry==0)
        {
            twoscomplement[i]='1';
            carry=0;
        }
    }
    twoscomplement[n]='\0';
    printf("%s\n",twoscomplement);
    return 0;
}
*/
// Output:
// Enter the number of bits you want to enter : 5
// Enter the binary number : 10100
// The ones complement of the binary number is : 01011
// The twos complement of the binary number is : 01100


// C Program to demonstrate the structure padding property
#include <stdio.h>

// Alignment requirements
// (typical 32 bit machine)

// char         1 byte
// short int    2 bytes
// int          4 bytes
// double       8 bytes

// structure A
// typedef struct structa_tag {
//     char c;
//     short int s;
// } structa_t;

// // structure B
// typedef struct structb_tag {
//     short int s;
//     char c;
//     int i;
// } structb_t;

// // structure C
// typedef struct structc_tag {
//     char c;
//     double d;
//     int s;
// } structc_t;

// // structure D
// typedef struct structd_tag {
//     double d;
//     int s;
//     char c;
// } structd_t;

// int main()
// {
//     printf("sizeof(structa_t) = %lu\n", sizeof(structa_t));
//     printf("sizeof(structb_t) = %lu\n", sizeof(structb_t));
//     printf("sizeof(structc_t) = %lu\n", sizeof(structc_t));
//     printf("sizeof(structd_t) = %lu\n", sizeof(structd_t));

//     //printf("%d\n",struct structc_tag);
//     return 0;
// }


#include<stdio.h>
int main()
{
    char* array1[3] = {"abc","def","hij"};
    char**p1 = array1;
    char array2[2][5] = {"123","456"};
    char (*p2)[5] = array2;
    p1++;
    p2++;
    printf("%d %d %d %d %d\n",sizeof(array1),sizeof(array2),sizeof(p2),**p1,**p2);
    return 0;
}

