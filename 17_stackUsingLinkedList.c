/*
Aim

Implement stack using linkedlist

Algorithm

		1. Start
		2. Globally declare integer val stuct node pointer next inside struct node with pointer head/top
		3. Initialize choice as 0
		4. Print “Stack operations using linked list”.
		5. Read choice
		6. If choice=1 Read the value to int val ,call push(val)
		7. If choice=2 call pop()
		8. If choice=3 call show()
		9. If choice=4, then Exit.
Procedure:-
	push()
		1. Start
		2. Allocate size of struct node for struct node newnode
		3. Set newnode`s data as val
		4. If head is null goto step 5 else step 6
		5. Set newnode`s pointer next as null
		6. Else Set newnode`s pointer next as head
		7. Assign value of newnode to head/top
		8. Print the Success message
		9. Stop
	pop()
		1. Start
		2. If head is null goto sterp 3 else step 4
		3. Return Underflow
		4. Set tempnode as top
		5. Print the Poped item
		7. Set head as next of temp node
		9. free(ptr)
		[End of loop]
		10. stop
	show()
		1. if top is null goto step 2 else 3
		2. Return stack is empty
		3. Declare temperory node and Initialize as top
		4. While temp next isnt not null repeat step 5 and 6
		5. Print value of val of temp points to val
		6. Move pointer of temp to next
		7. Print value of val of last node
		8. Stop.



*/

#include<stdio.h>
#include<stdlib.h>

struct Node
{
   int data;
   struct Node *next;
}*top = NULL;

void push(int);
void pop();
void display();

void main()
{
   int choice, value;
  
   printf("\n:: Stack using Linked List ::\n");
   while(1){
      printf("\n****** MENU ******\n");
      printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
      printf("Enter your choice: ");
      scanf("%d",&choice);
      switch(choice){
	 case 1: printf("Enter the value to be insert: ");
		 scanf("%d", &value);
		 push(value);
		 break;
	 case 2: pop(); break;
	 case 3: display(); break;
	 case 4: exit(0);
	 default: printf("\nWrong selection!!! Please try again!!!\n");
      }
   }
}
void push(int value)
{
   struct Node *newNode;
   newNode = (struct Node*)malloc(sizeof(struct Node));
   newNode->data = value;
   if(top == NULL)
      newNode->next = NULL;
   else
      newNode->next = top;
   top = newNode;
   printf("\nInsertion is Success!!!\n");
}
void pop()
{
   if(top == NULL)
      printf("\nStack is Empty!!!\n");
   else{
      struct Node *temp = top;
      printf("\nDeleted element: %d", temp->data);
      top = temp->next;
      free(temp);
   }
}
void display()
{
   if(top==NULL)
      printf("\nStack is Empty!!!\n");
   else{
      struct Node *temp =top;
      while(temp->next!=NULL)
	{
	 printf(" | %d |--->",temp->data);
	 temp=temp->next;
      	}
	   printf("| %d | ",temp->data);		//for bottom element
       }
}
