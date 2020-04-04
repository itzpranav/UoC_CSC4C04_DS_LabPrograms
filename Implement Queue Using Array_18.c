/*
	Aim
	Implement queue using array.

	Algorithm

		1. Start
		2. Set front=-1,rear=-1
		3. Read choice
		4. If choice=1, call insert()
		5. If choice=2, call delete()
		6. If choice=3, call display()
		7. If choice=4, Quit.
	Procedure:-

	insert()
		1. If rear=MAX-1, then print Queue overflow
		2. Else if front=-1, then set front=0, read queue[rear++]
		[end of if structure]
		3. Return
	delete()
		1. If front=-1 or front>rear
		 Print ‘queue underflow’.
		2. Else
		 Print deleted element queue_array[front].
		 front=front+1.
		[end of if structure]
		3. Return
	display()
		1. If front=-1, print ‘queue empty’
		 Else print queue
		2. For i=front and i<rear then
		3. i=i+1
		4. Print queue.
		5. Return

*/

#include<stdio.h>
#include<curses.h>
#include<stdlib.h>
#define SIZE 10

void enQueue(int);
void deQueue();
void display();

int queue[SIZE], front = -1, rear = -1;

void main()
{
      int value, choice;
      while(1)
	{
	      printf("\n\n\t******* MENU *******\n\n");
	      printf("\t\t1. EnQueue\n\t\t2. DeQueue\n\t\t3. Display\n\t\t4. Exit\n");
	      printf("\nEnter your choice: ");
	      scanf("%d",&choice);
	      switch(choice)
		{
			 case 1: printf("Enter the value to be insert: ");
				 scanf("%d",&value);
				 enQueue(value);
				 break;
			 case 2: deQueue();
				 break;
			 case 3: display();
				 break;
			 case 4: printf("You are exited from the Program\n\n");exit(0);
			 default: printf("\nWrong selection!!! Try again!!!");
	      }
   	}
}
void enQueue(int value)
	{
	   if(rear == SIZE-1)
	      printf("\nQueue is Full!!! Insertion is not possible!!!");
	   else
		{
		      if(front == -1)
			 front = 0;
		      rear++;
		      queue[rear] = value;
		      printf("\nInsertion success!!!");
	  	}
	}
void deQueue()
	{
	   if(front == - 1 || front > rear)
	      printf("\nQueue is Empty!!! Deletion is not possible!!!");
	   else
		{
		      printf("\nDeleted : %d", queue[front]);
		      front++;
		      if(front > rear)
			 front = rear = -1;
  		}
	}
void display()
	{
	   if(rear == -1)
	      printf("\nQueue is Empty!!!");
	   else
		{
		      int i;
		      printf("\nQueue elements are:\n\n\t(F)->");
		      for(i=front; i<=rear; i++)
			  printf("| %d |---",queue[i]);
	   	}
	}
