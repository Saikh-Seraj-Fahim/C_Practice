//YC-Bangla coding tutor
#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("TestFile.txt","a+");
    int i;
    for(i=65;i<=90;++i)
    {
        fputc(i,fp);
    }
    fputs("\n",fp);
    char str[100];
    printf("Enter Name:");
    gets(str);
    fputs(str,fp);
    fputs("\n",fp);
    fprintf(fp,"My id is:%d\n",54);

    fp=fopen("TestFile.txt","a+");
    char c;
    c=fgetc(fp);
    printf("The character is:%c\n",c);
    fclose(fp);
}