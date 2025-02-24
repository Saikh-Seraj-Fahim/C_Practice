//YC-Anisul Islam
#include<stdio.h>
#include<string.h>
int main()
{
    FILE *fp;
    char str[100]="H S T U";
    int i,length=strlen(str);
    fp=fopen("TestingFile.txt","w");
    if(fp==NULL)
        printf("File doesn't exist.\n");
    else
    {
        printf("File is opened\n");
        for(i=0;i<length;++i)
        {
            fputc(str[i],fp);
        }
        printf("File is written successfully.\n");
        fclose(fp);
    }
}


