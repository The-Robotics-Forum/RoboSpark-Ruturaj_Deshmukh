#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 20

struct stack
{
char stk[MAX];
int top;
}s;

void push(char item)
{
if (s.top == (MAX - 1))
printf ("Stack is Full\n");
else
{
s.top = s.top + 1; // Push the char and increment top
s.stk[s.top] = item;
}}

void pop()
{



s.top = s.top - 1; // Pop the char and decrement top
}

int main()
{
char exp[MAX];
int i = 0;
s.top = -1;
printf("\nINPUT THE EXPRESSION : ");
scanf("%s", exp);
for(i = 0;i < strlen(exp);i++)
{
if(exp[i] == '(' )
{
push(exp[i]); // Push the open bracket
continue;
}
else if(exp[i] == ')' ) // If a closed bracket is encountered
{
if (s.top == - 1)
{
printf ("\nUNBALANCED EXPRESSION\n");
exit(0);
}
pop(); // Pop the stack until closed bracket is found
}
 // Finally if the stack is empty, display that the expression is balanced
}
if(s.top == -1)
{
printf("\nBALANCED EXPRESSION\n");}
else{
    printf("\nUNBALANCED EXPRESSION");
}
}
	
	
	
