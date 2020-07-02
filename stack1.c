#include<stdio.h>
int main()
{
    char exp[100] = "{()}[]";
    if (areParenthesisBalanced(exp))
        printf("Balanced \n");
    else
        printf("Not Balanced \n");
    return 0;

    void push(struct Node*top, int newD)

    struct Node* newN = (struct Node*)malloc(sizeof(struct Node));
    if(newN == NULL)
    {
        exit(0);
    }
    newN->data = newD;
    newN->next = (*top);
    (*top) = newN;
}
int pop(struct Node*top)
{
    char res;
    struct Node* top1;

    /*If stack is empty then error */
    if (*top == NULL) {
        printf("Stack overflow n");
        getchar();
        exit(0);
    }
    else {
        top1 = *top;
        res = top1->data;
        *top = top1->next;
        free(top1);
        return res;
    }
}
