//Source-chatgpt
//Type extension occurs when converting a smaller data type to a larger one. This 
//operation usually doesn't lead to data loss but can introduce sign-extension issues 
//for signed types.

//Example of Extension with Integers:
#include <stdio.h>
int main() {
    char smallValue = -50; //smallValue is of type char
    int largeValue = (int) smallValue; //Explicit cast to larger type
    printf("Original value: %d\n", smallValue);
    printf("Extended value: %d\n", largeValue);
    return 0;
}
//Original value: -50
//Extended value: -50


//In this case, smallValue is a char with a value of -50. When cast to an int, the 
//sign is preserved through sign-extension, and the result remains -50. This is because
//the value is extended to fit the larger int type while preserving the sign.

//Example of Extension with Unsigned Types:
/*#include <stdio.h>
int main() {
    unsigned char smallValue = 200; //smallValue is of type unsigned char
    unsigned int largeValue = (unsigned int) smallValue;//Explicit cast to larger type
    printf("Original value: %u\n", smallValue);
    printf("Extended value: %u\n", largeValue);
    return 0;
}*/
//Original value: 200
//Extended value: 200


//Here, smallValue is an unsigned char with a value of 200. When cast to unsigned int,
//the value is simply extended without changing the actual numeric value.


