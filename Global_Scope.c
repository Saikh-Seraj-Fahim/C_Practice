//Source-gfg
#include <stdio.h>
//variable declared in global scope
int global = 5;
void display()
{
	printf("%d\n", global);
}
int main()
{
	printf("Before change within main: ");
	display();
	printf("After change within main: ");
	global = 10;
	display();
}
//Output:
// Before change within main: 5
// After change within main: 10
