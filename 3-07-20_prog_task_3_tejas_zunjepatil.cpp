#include<iostream>
#include<conio.h>
#include<stdlib.h>
 
using namespace std;
 
class node
{
    public:
        class node *left;
        class node *right;
        int data;
};
 
class tree: public node
{
    public:
        int stk[50], top;
        node *root;
        tree()
        {
            root = NULL;
            top = 0;
        }
        void insert(int ch)
        {
            node *temp, *temp1;
            if (root == NULL)
            {
                root = new node;
                root->data = ch;
                root->left = NULL;
                root->right = NULL;
                return;
            }
            temp1 = new node;
            temp1->data = ch;
            temp1->right = temp1->left = NULL;
            temp = search(root, ch);
            if (temp->data > ch)
                temp->left = temp1;
            else
                temp->right = temp1;
 
        }
        node *search(node *temp, int ch)
        {
            if (root == NULL)
            {
                cout << "no node present";
                return NULL;
            }
            if (temp->left == NULL && temp->right == NULL)
                return temp;
 
            if (temp->data > ch)
            {
                if (temp->left == NULL)
                    return temp;
                search(temp->left, ch);
            }
            else
            {
                if (temp->right == NULL)
                    return temp;
                search(temp->right, ch);
 
            }
        }
 
        void display(node *temp)
        {
            if (temp == NULL)
                return;
            display(temp->left);
            cout << temp->data << " ";
            display(temp->right);
        }
        void postorder(node *root)
        {
            node *p;
            p = root;
            top = 0;
 
            while (1)
            {
                while (p != NULL)
                {
                    stk[top] = p->data;
                    top++;
                    if (p->right != NULL)
                        stk[top++] = -p->right->data;
                    p = p->left;
                }
                while (stk[top - 1] > 0 || top == 0)
                {
                    if (top == 0)
                        return;
                    cout << stk[top - 1] << " ";
                    p = pop(root);
                }
                if (stk[top - 1] < 0)
                {
                    stk[top - 1] = -stk[top - 1];
                    p = pop(root);
                }
            }
 
        }
        node * pop(node *p)
        {
            int ch;
            ch = stk[top - 1];
            if (p->data == ch)
            {
                top--;
                return p;
            }
            if (p->data > ch)
                pop(p->left);
            else
                pop(p->right);
        }
};
 
int main(int argc, char **argv)
{
    tree t1;
    int ch, n, i;
    while (1)
    {
        cout
                << "\n1.INSERT\n2.DISPLAY\n3.POSTORDER TRAVERSE\n4.EXIT\nEnter your choice:";
        cin >> ch;
        switch (ch)
        {
            case 1:
                cout << "Enter no of elements to insert: ";
                cin >> n;
                for (i = 1; i <= n; i++)
                {
                    cin >> ch;
                    t1.insert(ch);
                }
                break;
            case 2:
                t1.display(t1.root);
                break;
            case 3:
                t1.postorder(t1.root);
                break;
            case 4:
                exit(1);
        }
    }
}