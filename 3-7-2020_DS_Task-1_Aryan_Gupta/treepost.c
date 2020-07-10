#include<stdio.h>
#include<stdlib.h>

#define No_Of_Nodes 5
#define Max_Size 100

//Structure of Tree node
struct node
{
    int data;
    struct node *left,*right;
};

struct node* newNode(int data)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;    
}

void postorder(struct node* node) 
{ 
    // if null exit
    if (node == NULL) 
    return; 

    // Recur on left subtree 
    postorder(node->left); 

    // Recur on right subtree 
    postorder(node->right); 

    // Deal with the node 
    printf("%d ", node->data); 
} 

struct node* insert(struct node* node, int key)
{
    // If the tree is empty
    if (node == NULL) return newNode(key);

    // Checking minimum or maximum and then recursing the tree
    if (key < node->data)
        node->left  = insert(node->left, key);
    else if (key > node->data)
        node->right = insert(node->right, key);   

    return node;
}

struct node* search(struct node* node, int key)
{
    // Root is null or key is present at root
    if (node == NULL || node->data == key) return node;

    // Key is greater than root's key
    if (node->data < key) return search(node->right, key);

    // Key is smaller than root's key
    return search(node->left, key);
}

int main()
{
    struct node *node;
    int arr[Max_Size], i, j, k;
    char chk;

    printf(">> Enter elements\n");
    for(i=0;i<No_Of_Nodes;i++)
    {
        scanf("%d", &arr[i]);
    }

    // Inserting Nodes
    for(j=0;j<No_Of_Nodes;j++)
    {
        if(j==0)
        {   
            node = newNode(arr[j]);
        }
        else
        {
            insert(node, arr[j]);
        }   
    }

    // postorder
    printf(">> Check Postorder Traversals  [y/n] : ");
    fflush(stdin);
    scanf("%c", &chk);

    if(chk == 'y')
    {
        printf("The postorder is: ");
        postorder(node);
    }

    // Searching
    printf("\n>> Check if the node is present [y/n] : ");
    fflush(stdin);
    scanf("%c", &chk);

    if(chk == 'y')
    {
        printf(">> Enter value to search \n");
        scanf("%d", &k);

        if (search(node, k)==0)
        {
            printf("Nope he valu '%d' is NOT present ", k);
        }
        else
        {
            printf("Yes the node  '%d' is present", k);
        }
    }

    return 0;
}