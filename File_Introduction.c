//YC-Anisul Islam
#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("TestingFile.txt","w");
    if(fp==NULL)
        printf("File doesn't exist.\n");
    else
    {
        printf("File is opened\n");
        fclose(fp);
    }
}