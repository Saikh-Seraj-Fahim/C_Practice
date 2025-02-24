//Source-Javatpoint
//Left shift operator
/*#include <stdio.h>  
int main ()  
{  
    // declare local variable  
    int num;  
    printf (" Enter a positive number: ");  
    scanf (" %d", &num);  
    // use left shift operator to shift the bits  
    num = (num << 2); // It shifts two bits at the left side  
    printf (" \n After shifting the binary bits to the left side. ");  
    printf (" \n The new value of the variable num = %d", num);  
    return 0;  
}*/
//Enter a positive number: 25
//After shifting the binary bits to the left side.
//The new value of the variable num = 100
//25*(2^2)=25*4=100 


/*#include <stdio.h>  
int main ()  
{  
    // declare local variable  
    unsigned int num = 0xff;  
    // use left shift operator to shift the bits  
    num = (num << 2);  
    printf (" \n After shifting the binary bits to the left side. ");  
    printf (" \n The new value of the unsigned variable num = %d", num);  
    return 0;  
}*/
//After shifting the binary bits to the left side.
//The new value of the unsigned variable num = 1020
//255*(2^2)=255*4=1020
//0xff: This is a hexadecimal (base-16) literal. In hexadecimal notation, 0x is a prefix
//indicating that the number is in base-16, and ff represents the value. In decimal 
//(base-10), 0xff is equivalent to 15×16^1+15*16^0=15×16+15=255.


/*#include <stdio.h>  
int main ()  
{  
    // declare local variable  
    int num, bit;  
    printf (" Enter a positive number: ");  
    scanf (" %d", &num);  
  
    printf (" No. of binary bits shifted to the left side: ");  
    scanf (" %d", &bit);  
    // use left shift operator to shift the bits  
    num = (num << bit);  
    printf (" \n After shifting the bits to the left side. ");  
    printf (" \n The new value of the num = %d", num);  
    return 0;  
}*/
//Enter a positive number: 40
//No. of binary bits shifted to the left side: 4
//After shifting the bits to the left side.
//The new value of the num = 640
//40*(2^4)=40*16=640



//Right shift operator
/*#include <stdio.h>  
int main ()  
{  
    // declare local variable  
    int num;  
    printf (" Enter a positive number: ");  
    scanf (" %d", &num);  
    // use right shift operator to shift the bits  
    num = (num >> 2); // It shifts two bits at the right side  
    printf (" \n After shifting the binary bits to the right side. ");  
    printf (" \n The new value of the variable num = %d", num);  
    return 0;  
}*/
//Enter a positive number: 25
//After shifting the binary bits to the right side.
//The new value of the variable num = 6
//25/(2^2)=25/4=6


/*#include <stdio.h>  
int main ()  
{  
    // declare local variable  
    unsigned int num = 0xff;  
    // use right shift operator to shift the bits  
    num = (num >> 2);  
    printf (" \n After shifting the binary bits to the right side. ");  
    printf (" \n The new value of the unsigned variable num = %d", num);  
    return 0;  
}*/
//After shifting the binary bits to the right side.
//The new value of the unsigned variable num = 63
//255/(2^2)=255/4=63.75=63


#include <stdio.h>  
int main ()  
{  
    // declare local variable  
    int num, bit;  
    printf (" Enter a positive number: ");  
    scanf (" %d", &num);  
  
    printf (" No. of binary bits shifted to the right side: ");  
    scanf (" %d", &bit);  
    // use right shift operator to shift the bits  
    num = (num >> bit);  
    printf (" \n After using the right shift operator to shift the bits at the right side. ");  
    printf (" \n New value of the num = %d", num);  
    return 0;  
}  
//Enter a positive number: 40
//No. of binary bits shifted to the right side: 4
//After using the right shift operator to shift the bits to the right. 
//The new value of the num = 2 
//40/(2^4)=40/16=2