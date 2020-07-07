#include<bits/stdc++.h>
using namespace std ;

struct Node
{
    int data;
     Node *next;

};
Node *head;
void insertion_of_Node(int data,int n)
{
    
    Node* temp = new Node();
    temp -> data=data;
    temp -> next=NULL;
    
if(n==1)
    {temp->next=head;
    head = temp;
    return;
    }
    Node* temp1=head;
    for(int i=0;i<n-2;i++)
    {
        temp1=temp1->next;
    }
    temp->next=temp1->next;
    temp1->next=temp;
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
    insertion_of_Node(2,1);
    insertion_of_Node(2,3);
    insertion_of_Node(2,2);
    insertion_of_Node(2,4);
    print();
    return 0;
}

