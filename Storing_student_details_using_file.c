//YC-Anisul Islam
#include<stdio.h>
int main()
{
    FILE *fp;
    char name[40];
    int i,num,age,phone;
    fp=fopen("Student.txt","a");
    if(fp==NULL)
        printf("File doesn't exist.\n");
    else
    {
        printf("File is opened.\n");
        printf("Enter number of students:");
        scanf("%d",&num);
        for(i=1;i<=num;++i)
        {
            getchar();
            printf("Enter student name:");
            gets(name);

            printf("Enter student age:");
            scanf("%d",&age);

            printf("Enter student Phone number:");
            scanf("%d",&phone);

            fprintf(fp,"\n%s\t\t%d\t%d",name,age,phone);
        }
        fclose(fp);
    }
}
