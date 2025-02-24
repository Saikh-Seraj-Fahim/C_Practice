//Source-LoveExtendsCode                      
//Pointer with Structure,Allocate memory dynamically for Structure.
/*#include<stdio.h>
struct mystruct
{
    int age;
    double height;
};
int main()
{
    struct mystruct s1;
    s1.age=15;
    s1.height=22.5;
    printf("Age=%d\n",s1.age);
    printf("Height=%lf\n",s1.height);

    struct mystruct *p;
    p=&s1;
    (*p).age=23;//p->age=23;
    (*p).height=33.4;//p->height=33.4;
    printf("Age=%d\n",s1.age);//printf("Age=%d\n",p->age);
    printf("Height=%lf\n",s1.height);//printf("Height=%lf\n",p->height);
}*/
// Output:
// Age=15
// Height=22.500000
// Age=23
// Height=33.400000


#include<stdio.h>
#include<stdlib.h>
struct mystruct
{
    int age;
    double height;
};
int main()
{
    struct mystruct *p;
    p=(struct mystruct *)malloc(sizeof(struct mystruct));
    (*p).age=26;//p->age=26;
    (*p).height=37.2;//p->height=37.2;
    printf("Age=%d\n",(*p).age);//printf("%d\n",p->age);
    printf("Height=%lf\n",(*p).height);//printf("%lf\n",p->height);
}
// Output:
// Age=26
// Height=37.200000


//Source-Neso Academy.
/*#include<stdio.h> 
int main() 
{ 
    printf("%d\n",sizeof(NULL));
}*/
//Output:4



//Null Pointer:https://www.geeksforgeeks.org/null-pointer-in-c/


//Void Pointer:https://www.geeksforgeeks.org/void-pointer-c-cpp/


//Wild Pointer:https://www.geeksforgeeks.org/what-are-wild-pointers-how-can-we-avoid/


//Dangling Pointer:https://www.geeksforgeeks.org/dangling-pointer-in-programming/



//Dangling, Void, Null and Wild Pointers in C:
//https://www.geeksforgeeks.org/dangling-void-null-wild-pointers/



//Constant Pointers,Pointer to Constant,Constant Pointer to a Constant:
//https://www.javatpoint.com/const-pointer-in-c



//Constant Pointer.
/*#include <stdio.h>  
int main()  
{  
    int a=1;  
    int b=2;  
    int* const ptr;  
    ptr=&a;  
    ptr=&b;  
    printf("Value of ptr is :%d",*ptr);  
    return 0;  
}*/
//This code will show error. 


//Pointer to Constant
/*#include <stdio.h>  
int main()  
{  
    int a=100;  
    int b=200;  
    const int* ptr;  
    ptr=&a;  
    ptr=&b;  
    printf("Value of ptr is :%u",ptr);  
    return 0;  
}*/
//Output:Value of ptr is :6422292  


/*#include <stdio.h>  
int main()  
{  
    int a=100;  
    int b=200;  
    const int* ptr;  
    ptr=&b;  
    *ptr=300;  
    printf("Value of ptr is :%d",*ptr);  
    return 0;  
}*/
//This code will show error.


//Constant Pointer to a Constant
/*#include <stdio.h>  
int main()  
{  
    int a=10;  
    int b=90;  
    const int* const ptr=&a;  
   *ptr=12;  
    ptr=&b;  
    printf("Value of ptr is :%d",*ptr);  
    return 0;  
}*/
//This code will show error.