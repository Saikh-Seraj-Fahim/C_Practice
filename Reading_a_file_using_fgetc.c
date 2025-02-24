//YC-Anisul Islam
#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;
    fp=fopen("TestingFile.txt","r");
    if(fp==NULL)
        printf("File doesn't exist.\n");
    else
    {
        printf("File is opened\n");
        while(!feof(fp))
        {
            ch=fgetc(fp);
            printf("%c",ch);
        }
        fclose(fp);
    }
}