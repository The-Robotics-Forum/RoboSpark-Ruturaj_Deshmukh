#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left,*right;
};
void insert(struct node **p,int n)
{

    struct node *temp=NULL;
    if(!(*p))
    {
        temp=(struct node *)malloc(sizeof(struct node));
        temp->left=temp->right=NULL;
        temp->data=n;
        return;
    }
    if(n<(*p)->data)
    {
        insert(&(*p)->left,n);

    }
    else
    {
        insert(&(*p)->left,n);
    }
}

    int main()
    {
        struct node *root;
        struct node *tmp;
        root=NULL;
        insert(&root,4);
        insert(&root,10);
        insert(&root, 7);
        insert(&root,2);

    }


