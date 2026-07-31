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
	push(10);
	push(20);
	push(30);
	push(40);
    push(50);
	printf("\nElements of stack are:\n");
	display();
	push(60);
	pop();
	printf("\nElements of stack are:\n");
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
	else
	{
		printf("\npoped item is %d\n",stack[top]);
		top--;
	}
}
void display()
{
	if(top == -1) //stack is empty or not
	{
		printf("Stack is EMPTY or UNDERFLOW");
	}
	else
	{
		for(int i=0;i<=top;i++)
			printf("%d ",stack[i]);
	}
}