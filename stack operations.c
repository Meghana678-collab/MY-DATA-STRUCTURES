#include<stdio.h>
#define MAX 5
int s[MAX];
int top=-1;

void push(int value)
{
    if(top==MAX-1)
    {
        printf("stack overflow\n");
    }
    else
    {
        s[++top]=value;
        printf("%d pushed\n" , value);
    }
}

void pop()
{
    if(top==-1)
    {
        printf("stack underflow\n");
    }
    else
    {
        printf("%d poped\n",s[top]);
        top--;
    }
}

void peek()
{
    if(top==-1)
    {
        printf("stack underflow\n");
    }
    else
    {
        printf("first element = \n", s[top]);
    }
}
void display()
{
   if(top==-1)
   {
       printf("stack underflow\n");
   }
   else
   {
       printf("s (top-> bottom)\n");
       for(int i=top;i>=0;i--)
       {printf("%d" ,s[i]);
        printf("\n");
           
       }
   }
}
int main()
{   
    push(10);
    push(20);
    push(30);
    push(40);
    pop(10);
    pop(20);
    pop(30);
    peek();
    display();
    return 0;
}
