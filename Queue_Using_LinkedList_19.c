/*

	Aim

	Implement queue using linkedlist.

	Algorithm

		1. Start
		2. Declare structure node with data elements data and next.
		3. Do
		 Print menu
		1. Insert 2. Delete 3. Display 4. Exit
		4. Read choice
		5. If choice=1 then read the value and call insert(value)
		6. If choice=2 then call delete()
		7. If choice=3 then call display()
		8. If choice=4 then Exit.
		9. Until choice!=5 then
		[end of loop]
		10. Stop
	Procedure:-
	insert(value)
		1. Allocate memory for new node.
		2. Set newnode->data=value
		3. newnode->next=null.
		4. If front=null then
		 Set front=newnode
		 Else
		 Set rear->next=newnode
		 rear=newnode
		[end of if structure]
	delete()
		1. If temp=null then print ‘Empty queue’
		 Else
		 Set temp=front.
		 front=temp->next
		 Print deleted element,item
		 
		3. free(temp)
		[end of if structure]
	display()
		1. If temp=null then print ‘Queue empty’.
		2. Else
			Set temp=front
		 	if temp next != null
			Print temp->data, and move temp, temp=temp->next, until temp =null.
			[end of loop]
		3. print last element
		4. stop
		


*/
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



/*
To implement queue using linked list, we need to set the following things before implementing actual operations.

Step 1 - Include all the header files which are used in the program. And declare all the user defined functions.
Step 2 - Define a 'Node' structure with two members data and next.

 
Step 3 - Define two Node pointers 'front' and 'rear' and set both to NULL.
Step 4 - Implement the main method by displaying Menu of list of operations and make suitable function calls in the main method to perform user selected operation.
enQueue(value) - Inserting an element into the Queue
We can use the following steps to insert a new node into the queue...

Step 1 - Create a newNode with given value and set 'newNode → next' to NULL.
Step 2 - Check whether queue is Empty (rear == NULL)
Step 3 - If it is Empty then, set front = newNode and rear = newNode.
Step 4 - If it is Not Empty then, set rear → next = newNode and rear = newNode.
deQueue() - Deleting an Element from Queue
We can use the following steps to delete a node from the queue...

Step 1 - Check whether queue is Empty (front == NULL).
Step 2 - If it is Empty, then display "Queue is Empty!!! Deletion is not possible!!!" and terminate from the function

 
Step 3 - If it is Not Empty then, define a Node pointer 'temp' and set it to 'front'.
Step 4 - Then set 'front = front → next' and delete 'temp' (free(temp)).
display() - Displaying the elements of Queue
We can use the following steps to display the elements (nodes) of a queue...

Step 1 - Check whether queue is Empty (front == NULL).
Step 2 - If it is Empty then, display 'Queue is Empty!!!' and terminate the function.
Step 3 - If it is Not Empty then, define a Node pointer 'temp' and initialize with front.
Step 4 - Display 'temp → data --->' and move it to the next node. Repeat the same until 'temp' reaches to 'rear' (temp → next != NULL).
Step 5 - Finally! Display 'temp → data ---> NULL'.

*/
