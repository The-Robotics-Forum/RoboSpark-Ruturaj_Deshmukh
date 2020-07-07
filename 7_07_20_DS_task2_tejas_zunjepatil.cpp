#include<iostream>

using namespace std;

struct Node
{
    int data;
     Node *next;

};
Node *head;

void insert(int n)
{
    Node* temp = new Node();
    temp -> data=n;
    temp -> next=NULL;
    Node* temp1=head;

    temp->next=temp1->next;
    temp1->next=temp;
}
void delete_node(int n)
{
    Node *temp1=head;
    if(n==1)
    {
        head=temp1->next;
        free(temp1);
        return ;
    }
    
    int i;
    for(int i=0;i<n-2;i++)
    temp1=temp1->next;
    Node* temp2=temp1->next;
    temp1->next=temp2-> next;
    free(temp2);

}

void print()
{
      Node* temp2=head;
    while (temp2!=NULL)
    {
    cout<<temp2->data;
    temp2=temp2->next;
    }
    cout<<endl;
}
int main()
{
    head=NULL;
    insert(2);
    insert(8);
    insert(3);
    insert(5);
    int n;
    cout<<"enter the position";
    cin>>n;
    delete_node(n);

    return 0;
}