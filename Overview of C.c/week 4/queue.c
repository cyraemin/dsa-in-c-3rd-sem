//Simple queue
#include<stdio.h>
#define size 5
int queue[size];
int front=-1, rear=-1;
void insert(int);
void del();
void display();
int main()
{
	display();
	insert(10);
	insert(20);
	insert(30);
	insert(40);
  insert(50);
	printf("\nElements of queue are:\n");
	display();
	insert(60);
	del();
	printf("\nElements of queue are:\n");
	display();
	return 0;
}
void insert(int item)
{
	if(rear==size-1) //Queue is full or not
	{ 
	 printf("Queue is FULL or OVERFLOW");
	}
  else if(front==-1 && rear==-1){
    front=0;
    rear++;
    queue[rear]=item;
  }
	else
	{
		rear++; 
		queue[rear] = item;
	}
}
void del()
{
	if(front == -1) //queue is empty or not
	{
		printf("Queue is EMPTY or UNDERFLOW");
	}
	else if(front == rear)//only one element in Queue
	{
		printf('Deleted element is %d: \n', queue[front]);
    front=-1;
    rear=-1;
	}
  else
  {
    		printf('Deleted element is %d: \n', queue[front]);
        front++;
  }
}
void display()
{
	if(front == -1) //Queue is empty or not
	{
		printf("Queue is EMPTY or UNDERFLOW");
	}
	else
	{
		for(int i=front;i<=rear;i++)
			printf("%d ",queue[i]);
	}
}