#include<stdio.h>
#include<stdlib.h>

//create a node
struct node{
    int data;
    struct node* next;
};
struct node* head=NULL;

//insert at begin
void insertbegin(int value)
{
    struct node* newnode=(struct node*)malloc(sizeof(struct node));//allocate the memory for new node
    newnode->data=value;//put the value
    newnode->next=head;//connects new node to previous node
    head=newnode;//update the head pointer to new node
}

void display()
{
    struct node* temp=head;//temp is variable used to store value of temp like temporarly
    while(temp!=NULL)//10!=0(true)
    {
        printf("%d ->  ",temp->data);
        temp=temp->next;//newnode
    }
    printf("NULL\n");
}
int main()
{ 
    insertbegin(10);//function call with parameter 
    insertbegin(12);
     insertbegin(20);//
    display();// function call
    return 0;
