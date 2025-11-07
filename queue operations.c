#include<stdio.h>
#define SIZE 5

int queue[SIZE];
int front=-1,rear=-1;

void enqueue(int value)
{
    if(rear==SIZE-1)
    {
        printf("queue is full\n");
    }
    else{
        if(front==-1)
        front = 0;
        rear++;
        queue[rear]=value;
        printf(" %d inserted\n" , value);
    }
}
 
void dequeue()
{
    if(front==-1||front>rear)
    { 
        printf("queue is empty\n");
    }
    else
    {
        printf("%d deleted\n" , queue[front]);
        front++;
    }
}
void peek()
{
    if(front==-1||front>rear)
    { 
        printf("queue is empty");
    }
    else
    {
        printf("first element = %d\n", queue[front]);
    }
        // Reset queue when last element is removed
    if (front > rear)
        front = rear = -1;

}
void display()
{
     if(front==-1||front>rear)
    { 
        printf("queue is empty");
    }
    else
    {
        printf("queue operations\n");
        for(int i=front;i<=rear;i++)
        {
            printf("%d\n",queue[i]);
             printf("\n");
        }
    }
}
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    dequeue();
    dequeue();
    dequeue();
    enqueue(20);
    peek();
    display();
    return 0;
}
