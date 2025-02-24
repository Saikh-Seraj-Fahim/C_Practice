//Source-gfg
/*#include <stdio.h> 
// After this line HYD is replaced by 
// "Hyderabad" 
#define HYD "Hyderabad" 
int main() 
{ 
	printf("%s ", HYD); 
	return 0; 
}*/



// C program to demonstrate importance 
// of typedef over #define for data types 
#include <stdio.h> 
typedef char* ptr; 
#define PTR char* 
int main() 
{ 
	ptr a, b, c; 
	PTR x, y, z; 
	printf("sizeof a:%zu\n" ,sizeof(a)); 
	printf("sizeof b:%zu\n" ,sizeof(b)); 
	printf("sizeof c:%zu\n" ,sizeof(c)); 
	printf("sizeof x:%zu\n" ,sizeof(x)); 
	printf("sizeof y:%zu\n" ,sizeof(y)); 
	printf("sizeof z:%zu\n" ,sizeof(z)); 
	return 0; 
} 
// Output:
// sizeof a:4
// sizeof b:4        
// sizeof c:4        
// sizeof x:4        
// sizeof y:1        
// sizeof z:1  
