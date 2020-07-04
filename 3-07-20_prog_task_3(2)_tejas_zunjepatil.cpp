#include<stdio.h>
#include<stdlib.h>


void initializer(struct Queue* student)
{
    Queue *even =new [10];
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

struct student

{
    char name[100];
    int roll_number;
};
int main()
{
    struct student s[10];
   
    for(int i=0;i<n;i++)
     {
        cout<<"enter the name";
        cin>>name;
        cout<<"Enter roll number ";
        cin>>roll_number;
    }
}


    while (!isEmptyQueue(even))
    {
        enqueue(student, even->list.first->data);
        dequeue(even);
    }
    free(even);
}