//Source-gfg
// C program to illustrate the local scope
#include <stdio.h>
int main()
{
	{
		int x = 10, y = 20;
		{
			printf("x = %d, y = %d\n", x, y);
			{
				int y = 40;
				x++;
				y++;
				printf("x = %d, y = %d\n", x, y);
			}
			printf("x = %d, y = %d\n", x, y);
		}
	}
	return 0;
}

//x = 10, y = 20
//x = 11, y = 41    
//x = 11, y = 20


/*#include <stdio.h>
int main()
{
	{
		int x = 10, y = 20;
		{
			printf("x = %d, y = %d\n", x, y);
			{
				int y;
				x++;
				y++;
				printf("x = %d, y = %d\n", x, y);
			}
			printf("x = %d, y = %d\n", x, y);
		}
	}
	return 0;
}
*/

//x = 10, y = 20
//x = 11, y = 1     
//x = 11, y = 20


