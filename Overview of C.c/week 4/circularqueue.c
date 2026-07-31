//Circular queue
#include<stdio.h>
#define size 5
int cqueue[size];
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
	printf("\nElements of circular queue are:\n");
	display();
	insert(60);
	del();
	printf("\nElements of circular queue are:\n");
	display();
	return 0;
}
void insert(int item)
{
	if((front ==0 && rear==size-1) || (front==rear+1)) //Queue is full or not
	{ 
	 printf("Circular Queue is FULL or OVERFLOW");
	}
  else if(front==-1 && rear==-1){
    front=0;
    rear++;
    cqueue[rear]=item;
  }
	else
	{
    if(rear==size-1 && front!=0){
      rear=0;
      cqueue[rear]=item;
    }
    else {
		rear++; 
		cqueue[rear] = item;
    }
	}
}
void del()
{
	if(front == -1) //queue is empty or not
	{
		printf("cQueue is EMPTY or UNDERFLOW");
	}
	else if(front == rear)//only one element in Queue
	{
		printf('Deleted element is %d: \n', cqueue[front]);
    front=-1;
    rear=-1;
	}
  else
  {
    		if(front==size-1)
				{
					printf('Deleted element is %d: \n', cqueue[front]);
          front=0;
				}
				else
				{
					printf('Deleted element is %d: \n', cqueue[front]);
          front++;
				}
  }
}
void display()
{
	if(front == -1) //cQueue is empty or not
	{
		printf("Circular Queue is EMPTY or UNDERFLOW");
	}
	else
	{  if (front<=rear){
		for(int i=front;i<=rear;i++)
			printf("%d ",cqueue[i]);
	}
  else
	{
   for ( int i=front;i<=size-1;i++)
   printf("%d",cqueue[i]);
   for ( int i=0;i<=rear;i++)
   printf("%d",cqueue[i]);
  }

}
}