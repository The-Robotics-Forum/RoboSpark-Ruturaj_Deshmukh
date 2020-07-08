#include<stdio.h>
#include<stdlib.h>

#define No_Of_Students 4


typedef struct Queue
{
    int arr[10];
    int front, rear;
}Queue;


struct Students
{
    char name[20];
    int rno;
}stud[No_Of_Students];



void initl(Queue* q)
{
    q->front=0;
    q->rear=0;
}

void enqueue(Queue* q, int x)
{
    q->arr[q->rear++]=x;
}

int dequeue(Queue* q)
{
    return q->arr[q->front++];
}

int isEmpty(Queue* q)
{
    return q->front == q-> rear;
}

int main()
{
    int i, j;

    Queue* q1 = (Queue*)malloc(sizeof(Queue));
    initl(q1);

    for(i=0;i<No_Of_Students;i++)
    {
        printf("\nEnter the name of Student %d: ", i+1);
        fflush(stdin);
        gets(stud[i].name);

        printf("Enter %s's roll number: ", stud[i].name);
        scanf("%d", &stud[i].rno);

        if(stud[i].rno%2==0)
        {
            enqueue(q1, stud[i].rno);
        }
    }

    if(isEmpty(q1))
    {
        printf("\nNo Students with even Roll numbers\n");
        exit(0);
    }

    printf("\nThe name of students with even roll number's: \n");
    for(i=0;i<No_Of_Students;i++)
    {
        for(j=q1->front;j<q1->rear;j++)
        {
            if(stud[i].rno == q1->arr[j])
            {
                printf("%s\n", stud[i].name);
            }
        }
    }
} 