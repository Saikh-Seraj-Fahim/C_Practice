//YC-Portfolio Courses
#include<stdio.h>
int main()
{
    char s[]="Bangladesh";
    printf("%s\n",s);

    s[7]='\0'; //Null terminating character
    printf("%s\n",s);

    s[6]=0; //Null terminating character
    printf("%s\n",s);


    if(s[5])
        printf("It is not the null terminator \n");
    else
        printf("It is the null terminator \n");


    if(s[6])
        printf("It is not the null terminator \n");
    else
        printf("It is the null terminator \n");


    if(!s[5])
        printf("It is the null terminator \n");
    else
        printf("It is not the null terminator \n");


    if(!s[6])
        printf("It is the null terminator \n");
    else
        printf("It is not the null terminator \n");

    
    char t[]="HSTU,Dinajpur";
    char *p=t;
    while(*p)
    {
        printf("%c ",*p);
        ++p;
    }
    printf("\n");
}

//Output:
// Bangladesh
// Banglad
// Bangla
// It is not the null terminator 
// It is the null terminator     
// It is not the null terminator 
// It is the null terminator     
// H S T U , D i n a j p u r 