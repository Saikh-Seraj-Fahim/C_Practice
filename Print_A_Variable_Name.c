//Source-gfg
//A token passed to macro can be converted to a string literal by using # before it.
//In C, there’s a # directive, also called ‘Stringizing Operator’, which does this 
//magic. Basically # directive converts its argument in a string.
#include<stdio.h>
#define getName(var) #var 
int main() 
{ 
	int myVar=6; 
	printf("%s\n", getName(myVar)); 
	return 0; 
}


/*#include <stdio.h> 
#define getName(var, str) sprintf(str, "%s", #var) 
int main() 
{ 
	int myVar; 
	char str[20]; 
	getName(myVar, str); 
	printf("%s", str); 
	return 0; 
}*/ 

