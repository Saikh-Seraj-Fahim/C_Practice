//YC-Anisul Islam
#include<stdio.h>
int main()
{
    FILE *fp;
    char str[100];
    fp=fopen("TestingFile.txt","w");
    if(fp==NULL)
        printf("File doesn't exist.\n");
    else
    {
        printf("File is opened\n");
        printf("Enter your name:");
        gets(str);

        fputs(str,fp);
        fputs("\n",fp);
        printf("File is written successfully.\n");
        fclose(fp);
    }
}