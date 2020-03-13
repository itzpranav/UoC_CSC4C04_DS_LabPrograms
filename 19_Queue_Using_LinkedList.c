#include<stdio.h>
#include<stdlib.h>

struct Node
{
   int data;
   struct Node *next;
}*front = NULL,*rear = NULL;

void EnQueue(int);
void DeQueue();
void display();

void main()
{
   int choice, value;
   printf("\n\t\t:: Queue Implementation using Linked List ::\n");
   while(1)
	{
	      printf("\n\t\t******************  MENU  ******************\n");
	      printf("\t\t\t\t1. EnQueue\t2. DeQueue\n\n\t\t\t\t3. Display\t4. Exit\n\n");
	      printf("Enter your choice:\n");
	      scanf("%d",&choice);
	      switch(choice)
			{
			 case 1: printf("Enter the value to be insert: ");
				 scanf("%d", &value);
				 EnQueue(value);
				 break;
			 case 2: DeQueue(); break;
			 case 3: display(); break;
			 case 4: printf("You are exited from the Program\n\n");exit(0);
			 default: printf("\nWrong selection!!! Please try again!!!\n");
	      		}
   }
}


void EnQueue(int value)
	{
	   struct Node *newNode;
	   newNode = (struct Node*)malloc(sizeof(struct Node));
	   newNode->data = value;
	   newNode -> next = NULL;
	   if(front == NULL)
	      front = rear = newNode;
	   else
		{
		      rear -> next = newNode;
		      rear = newNode;
	   	}
	   printf("\nInsertion is Success!!!\n");
	}

void DeQueue()
	{
	   if(front == NULL)
	      printf("\nQueue is Empty!!!\n");
	   else
		{
		      struct Node *temp = front;
		      front = front -> next;
		      printf("\nDeleted element: %d\n", temp->data);
		      free(temp);
	   	}
	}


void display()
	{
	   if(front == NULL)
	      printf("\nQueue is Empty!!!\n");
	   else
		{
		      struct Node *temp = front;
		      while(temp->next != NULL)
				{
					 printf("%d--->",temp->data);
					 temp = temp -> next;
	      			}
	   		printf("%d--->NULL\n",temp->data);
		}
	}
