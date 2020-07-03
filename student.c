#include<stdio.h>
 struct student
 {
     int id;
     char name[20];
     int year;
     float cgpa;

 };
 int main()
 {
     struct student s[5];
     int i;
     for(i=0;i<5;i++)
     {
     printf("\nEnter student Name :");
     scanf("%s",&s[i].name);
     printf("\nEnter id : ");
     scanf("%d",&s[i].id);
     printf("\nEnter cgpa : ");
     scanf("%f",&s[i].cgpa);
     printf("\nEnter year : ");
     scanf("%d",&s[i].year);

     printf("\n STUDENT DETAILS...");
     printf("\n Name : %s",s[i].name);
     printf("\n id : %d",s[i].id);
     printf("\n cgpa : %f",s[i].cgpa);
     printf("\n Year : %d",s[i].year);
     getch();

     }
 }

