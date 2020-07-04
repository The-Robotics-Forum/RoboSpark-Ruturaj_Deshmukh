#include<stdio.h>
#include<stdlib.h>

struct student

{
    char name[20];
    int roll;
};
int main()
{
    struct student s[8];
    int i,n;
    for(i=0;i<n;i++)
     {
        printf("\n Enter the Name : ");
        scanf("%s",&s[i].name);
        printf("\n Enter Roll No. : ");
        scanf("%d",&s[i].roll);
    }
}Queue;



void initializer(struct Queue* student)
{
    Queue *even =(Queue*) malloc(sizeof(Queue));
    even->list.size = 0;
    even->list.first = NULL;
    while (!isEmptyQueue(student))
    {
        if ((student->list.first->data)%2 == 0)
        {

            enqueue(even, student->list.first->data);

        }
        dequeue(student);
    }
    while (!isEmptyQueue(even))
    {
        enqueue(student, even->list.first->data);
        dequeue(even);
    }
    free(even);
}
