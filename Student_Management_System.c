#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void addStudent();
void showAll();
void searchStudent();
void deleteStudent();

struct student
{
    char first_name[50];
    char last_name[50];
    int roll_no;
    char Class[10];
    char village[20];
    float per;
};

void main()
{
    int choice;
    while(choice!=5)
    {
        printf("\t\t\t=====Student Management System=====");
        printf("\n\n\n\t\t\t\t 1.Add Student Record\n");
        printf("\t\t\t\t 2.Student Records\n");
        printf("\t\t\t\t 3.Search Student\n");
        printf("\t\t\t\t 4.Delete Student\n");
        printf("\t\t\t\t 5.Exit\n");
        printf("\t\t\t\t ---------------------------\n");
        printf("\t\t\t\t");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            system("cls");
            addStudent();
            //getch();
            system("cls");
            break;
        case 2:
            system("cls");
            showAll();
            printf("\t\t\t\tPress any key to exit\n");
            getch();
            system("cls");
            break;
        case 3:
            system("cls");
            searchStudent();
            printf("\t\t\t\tPress any key to exit\n");
            getch();
            system("cls");
            break;
        case 4:
            system("cls");
            deleteStudent();
            printf("\t\t\t\tPress any key to exit\n");
            getch();
            system("cls");
            break;
        case 5:
            system("cls");
            printf("\n\t\t\t\tThank you.\n\n");
            exit(0);
            break;
        default:
            system("cls");
            getch();
            printf("\n\t\t\tEnter a valid number:\n\n");
            printf("\n\t\t\tPress any key to continue:\n\n");
            getch();
            system("cls");
            break;
        }
    }
}

void addStudent()
{
    char another;
    FILE *fp;
    struct student info;
    do
    {
        system("cls");
        printf("\t\t\t\t======Add Student Record======\n\n\n");
        fp=fopen("StudentMS.txt","a");
        getchar();
        printf("\n\t\t\tEnter first name:");
        scanf("%s",&info.first_name);
        printf("\n\t\t\tEnter last name :");
        scanf("%s",&info.last_name);
        printf("\n\t\t\tEnter roll no   :");
        scanf("%d",&info.roll_no);
        //getchar();
        printf("\n\t\t\tEnter class     :");
        scanf("%s",&info.Class);
        printf("\n\t\t\tEnter address   :");
        scanf("%s",&info.village);
        printf("\n\t\t\tEnter percentage:");
        scanf("%f",&info.per);
        //getchar();
        printf("\n\t\t\t-----------------\n");
        if(fp==NULL)
            fprintf(stderr,"\t\t\tCan't open file\n");
        else
            printf("\t\t\tRecord stored successfully\n");
        fwrite(&info,sizeof(struct student),1,fp);
        fclose(fp);
        printf("\t\t\tDo you want to add another record?(y/n):");
        scanf("%c",&another);
    }
    while(another=='y' || another=='Y');
}

void showAll()
{
    FILE *fp;
    struct student info;
    fp=fopen("StudentMS.txt","r");
    printf("\t\t\t\t======Student Records======\n\n\n");
    if(fp==NULL)
        fprintf(stderr,"\t\t\tCan't open file\n");
    else
    {
        printf("\t\t\tRecords\n");
        printf("\t\t\t\t---------------\n\n");
    }
    while(fread(&info,sizeof(struct student),1,fp))
    {
        printf("\n\t\t\t\tStudent Name :%s %s",info.first_name,info.last_name);
        printf("\n\t\t\t\tRoll No      :%d",info.roll_no);
        printf("\n\t\t\t\tClass        :%s",info.Class);
        printf("\n\t\t\t\tAddress      :%s",info.village);
        printf("\n\t\t\t\tPercentage   :%f",info.per);
        printf("\n\t\t\t\t------------------------\n");
    }
    fclose(fp);
    getch();
}

void searchStudent()
{
    FILE *fp;
    struct student info;
    fp=fopen("StudentMS.txt","r");
    int roll_no,found=0;
    printf("\t\t\t\t======Search Student======\n\n\n");
    printf("\t\t\tEnter roll no : ");
    scanf("%d",&roll_no);
    while(fread(&info,sizeof(struct student),1,fp))
    {
        if(info.roll_no==roll_no)
        {
            found=1;
            printf("\n\t\t\t\tStudent Name :%s %s",info.first_name,info.last_name);
            printf("\n\t\t\t\tRoll No      :%d",info.roll_no);
            printf("\n\t\t\t\tClass        :%s",info.Class);
            printf("\n\t\t\t\tAddress      :%s",info.village);
            printf("\n\t\t\t\tPercentage   :%f",info.per);
            printf("\n\t\t\t\t------------------------\n");
        }
    }
    if(!found)
        printf("\n\t\t\tRecord not found\n");
    fclose(fp);
    getch();
}

void deleteStudent()
{
    FILE *fp,*fp1;
    struct student info;
    fp=fopen("StudentMS.txt","r");
    fp1=fopen("Temp.txt","w");
    printf("\t\t\t\t======Delete Student======\n\n\n");
    int roll_no,found=0;
    printf("\t\t\tEnter roll no : ");
    scanf("%d",&roll_no);
    if(fp==NULL)
        fprintf(stderr,"\t\t\tCan't open file\n");
    while(fread(&info,sizeof(struct student),1,fp))
    {
        if(info.roll_no==roll_no)
            found=1;
        else
            fwrite(&info,sizeof(struct student),1,fp1);
    }
    fclose(fp);
    fclose(fp1);
    if(found)
    {
        remove("StudentMS.txt");
        rename("temp.txt","StudentMS.txt");
        printf("\n\t\tRecord deleted successfully\n");
    }
    if(!found)
        printf("\n\t\t\tRecord not found\n");
    getch();
}