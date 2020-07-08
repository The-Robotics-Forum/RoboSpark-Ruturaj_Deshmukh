#include <stdio.h>
#include <stdlib.h>
struct Student{
   int stud_id,stud_year;
   char stud_name[20];
   float stud_cgpa;
};
int main(){
   struct Student STUD[4];
   int i;
   for(i = 0; i < 4; i++)
   {
       printf("\n\nStudent %d id :",i+1);
       scanf("%d",&STUD[i].stud_id);

       printf("\n Student %d Name :",i+1);
       scanf("%s",STUD[i].stud_name);
       fflush(stdin);

       printf("\n Student %d Year :",i+1);
       scanf("%d",&STUD[i].stud_year);

       printf("\n Student %d CGPA :",i+1);
       scanf("%f",&STUD[i].stud_cgpa);

   }
   printf("\n\n");
   for(i = 0;i < 4; i++)
   {
       printf("\nStudent %d id is   :%d", i+1, STUD[i].stud_id);
       printf("\nStudent %d Name is :%s", i+1, STUD[i].stud_name);
       printf("\nStudent %d Year is :%d" ,i+1, STUD[i].stud_year);
       printf("\nStudent %d CGPA is :%0.2f\n\n" ,i+1, STUD[i].stud_cgpa);
   }
}