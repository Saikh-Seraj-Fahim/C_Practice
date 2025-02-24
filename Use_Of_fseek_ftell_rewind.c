//YC-HPlus Academy
#include<stdio.h>
int main()
{
    FILE *fp;
    char str[50];
    int n;
    fp=fopen("TestFile.txt","r");
    fgets(str,22,fp);
    printf("Before seek function,File Contents are: %s\n",str);

    fseek(fp,6,SEEK_SET);
    fgets(str,9,fp);
    printf("After SEEK_SET to 6,File Contents are: %s\n",str);

    fseek(fp,-3,SEEK_CUR);
    fgets(str,5,fp);
    printf("After SEEK_CUR to -3,File Contents are: %s\n",str);

    n=ftell(fp);
    printf("Current position of file pointer is at %d\n",n);

    rewind(fp);
    n=ftell(fp);
    printf("Current position of file pointer is at %d\n",n);
    fclose(fp);
}
// Output:
// Before seek function,File Contents are: ABCDEFGHIJABCDEFGHIJ

// After SEEK_SET to 6,File Contents are: GHIJABCD
// After SEEK_CUR to -3,File Contents are: BCDE   
// Current position of file pointer is at 15      
// Current position of file pointer is at 0   