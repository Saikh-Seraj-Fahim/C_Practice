//YC-Anisul Islam
#include<stdio.h>
int main()
{
    FILE *fp;
    char fname[40],lname[40];
    int age;
    fp=fopen("TestingFile.txt","r");
    if(fp==NULL)
        printf("File doesn't exist.\n");
    else
    {
        printf("File is opened.\n");
        fscanf(fp,"%s %s %d",&fname,&lname,&age);
        printf("%s %s %d\n",fname,lname,age);
        fclose(fp);
    }
}
//Output-Saikh Seraj 26