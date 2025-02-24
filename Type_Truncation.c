//Source-chatgpt
//Type truncation occurs when converting a larger data type to a smaller one, 
//leading to potential loss of data. This typically happens when you convert from a 
//type with a larger range or precision to one with a smaller range or precision.

//Example of Truncation with Integers:
#include <stdio.h>
int main() {
    int largeValue = 300;
    char smallValue = (char) largeValue; // Explicit cast to smaller type
    printf("Original value: %d\n", largeValue);
    printf("Truncated value: %d\n", smallValue);
    return 0;
}

//Original value: 300
//Truncated value: 44


//In this example, largeValue is of type int and holds the value 300. When we cast 
//it to char, which typically has a smaller range (-128 to 127 for signed char), the 
//value gets truncated, and the result may not represent the original value correctly.

//Example of Truncation with Floating-Point Numbers:
/*#include <stdio.h>
int main() {
    double largeValue = 123.456;
    float smallValue = (float) largeValue;  // Explicit cast to smaller type
    printf("Original value: %f\n", largeValue);
    printf("Truncated value: %f\n", smallValue);
    return 0;
}*/

//Original value: 123.456000
//Truncated value: 123.456001


//Here, largeValue is a double, which has higher precision than float. When cast to 
//float, the precision is reduced, and the truncated value might not exactly match the
//original.



//Key Points to Remember:
//Truncation can lead to loss of data and unexpected values.
//Extension generally does not lose data but can introduce sign-extension issues.
//Always be cautious with implicit type conversions; use explicit casts to ensure the 
//intended behavior.
//Understand the range and precision of different data types to avoid unintended 
//consequences.
//These concepts are essential for writing robust C programs, especially when dealing 
//with mixed-type arithmetic and assignments.