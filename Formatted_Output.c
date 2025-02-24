//Source-Ansi C Book
/*#include<stdio.h>
int main()
{
    int m=12345;
    long n=987654;
    printf("%d\n",m);
    printf("%10d\n",m);
    printf("%010d\n",m);
    printf("%-10d\n",m);
    printf("%2d\n",m);
    printf("%-2d\n",m);
    printf("\n");

    printf("%10ld\n",n);
    printf("%10ld\n",-n);
}*/
// Output:
// 12345
//      12345
// 0000012345
// 12345     
// 12345     
// 12345     

//     987654
//    -987654


#include<stdio.h>
int main()
{
    float y=98.7654;
    printf("%7.4f\n",y);
    printf("%f\n",y);
    printf("%7.2f\n",y);
    printf("%-7.2f\n",y);
    printf("%07.2f\n",y);
    printf("%*.*f\n",7,2,y);
    printf("\n");
    printf("%10.2e\n",y);
    printf("%12.4e\n",-y);
    printf("%-10.2e\n",y);
    printf("%e\n",y);
}
// Output:
// 98.7654
// 98.765404 
//   98.77   
// 98.77     
// 0098.77   
//   98.77   

//  9.88e+001
// -9.8765e+001
// 9.88e+001
// 9.876540e+001


/*#include<stdio.h>
int main()
{
    char x='A';
    char name[20]="Saikh Seraj Fahim";
    printf("OUTPUT OF CHARACTERS:\n\n");
    printf("%c\n%3c\n%5c\n",x,x,x);
    printf("%3c\n%c\n",x,x);
    printf("\n");
    printf("OUTPUT OF STRINGS:\n\n");
    printf("%s\n",name);
    printf("%20s\n",name);
    printf("%20.10s\n",name);
    printf("%.5s\n",name);
    printf("%-20.10s\n",name);
    printf("%5s\n",name);
}*/
// Output:
// OUTPUT OF CHARACTERS:

// A    
//   A  
//     A
//   A  
// A    

// OUTPUT OF STRINGS:

// Saikh Seraj Fahim
//    Saikh Seraj Fahim
//           Saikh Sera
// Saikh
// Saikh Sera
// Saikh Seraj Fahim