//YC-Anisul Islam
#include<stdio.h>
int main()
{
    FILE *fp;
    char str[50];
    fp=fopen("TestingFile.txt","r");
    if(fp==NULL)
        printf("File doesn't exist.\n");
    else
    {
        printf("File is opened.\n");
        while(!feof(fp))
        {
            fgets(str,40,fp);
            printf("%s\n",str);
        }
        fclose(fp);
    }
}