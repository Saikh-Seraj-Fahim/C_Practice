//YC-Anisul Islam
#include<stdio.h>
int main()
{
    FILE *fp;
    char name[50];
    int age;
    fp=fopen("TestingFile.txt","a");
    if(fp==NULL)
        printf("File doesn't exist.\n");
    else
    {
        printf("File is opened\n");
        printf("Enter your name:");
        gets(name);

        printf("Enter your age:");
        scanf("%d",&age);

        fprintf(fp,"Name=%s  Age=%d\n",name,age);
        printf("File is written successfully.\n");
        fclose(fp);
    }
}