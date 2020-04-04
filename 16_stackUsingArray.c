		

		/*
		Aim
		Implement stack using array.
				
		Algorithm
		
			1. Start
			2. Globaly declare array stack choice,n,top,x,i
			3. Set top = -1
			4. Read size of stack as n
			5. Read choice.
			6. If choice=1 call push()
			7. If choice=2 call pop()
			8. If choice=3 call display()
			9. If choice=4 then Exit.
		Procedure:-
		
		push()
			1. Start
			2. If top is greater than or equal to n-1 goto step 3 else 4
			3. Return STACK is overflow
			4. Read value to be pushed as x
			5. Increment top by 1
			6. Assign value x to stack of id top
			[End of loop]
			7. Stop
		pop()
			1. Start
			2. If top less than or equals to -1 goto step 3 else step 4
			3. Stack is underflow
			4. Return The popped element is %d, of stack[top]
			5. Decrement top by one
			[End of loop]
			6. Stop
		display()
			1. Start
			2. If top is greater than or equals zero go step 3 else
			3. Print the elements in stack
			4. Repeat steps 5 and 6 till i from top reaches zero
			5. Print value of stack[i]
			6. Print Request for next choice;
			[End of loop]
			7. Stop

		
		*/
		
		#include <stdio.h>
		#include <stdlib.h>
		 
		#define MAX 50
		 
		int STACK[MAX],TOP; 			
		
		void display(int []);			/* display stack element*/
		 		
		void PUSH(int [],int);			/* push (insert) item into stack*/
				
		void POP (int []);			/* pop (remove) item from stack*/
		 
		void main()
		{
		    int ITEM=0;
		    int choice=0;
		    TOP=-1;
		 
				    while(1)
				    {					
					printf("\n -----------------------MENU----------------------------------\n");
					printf("\n Enter Your Choice \n\n\t 1: display \n\t 2: insert (PUSH) \n\t 3: remove(POP)) \n\t 4: Exit..: \n");
					scanf("%d",&choice);
				 
						switch(choice)
						{
						    case 1:
							display(STACK);
						    break;
						    case 2:
							printf("Enter Item to be insert : \n");
							scanf("%d",&ITEM);
							PUSH(STACK,ITEM);
						    break;
						    case 3:
							POP(STACK);
						    break;
						    case 4:
							exit(0);
						    default:
						    printf("\nInvalid choice.\n");
						    break;
						}
				       
				    }	// end of while(1)
		 
		}
		 
		
		
		void display(int stack[])			//  function    : display(),to display stack elements.
		{
		    int i=0;
		    if(TOP==-1)
			    {
				printf("Stack is Empty .\n");
				return;
			    }
		 
		    printf("TOP ---> %d ",stack[TOP]);
		    for(i=TOP-1;i >=0;i--)
			    {
				printf("\n\t %d",stack[i]);
			    }
		    printf("\n\n");
		}
		 
		
		
		void PUSH(int stack[],int item)			//  function    : PUSH(),to push an item into stack.
			{
			    if(TOP==MAX-1)
				    {
					printf("\nSTACK is FULL CAN't ADD ITEM\n");
					return;
				    }

			    TOP++;
			    stack[TOP]=item;
			    printf("Data %d is successfully inserted to the Stack\n", item );
			}
		 
		
		void POP(int stack[])				//  function    : POP(),to pop an item from stack.
		{
		    int deletedItem;
		    if(TOP==-1)
		    {
			printf("STACK is EMPTY.\n");
			return;
		    }
		 
		    deletedItem=stack[TOP];
		    TOP--;
		    printf("Data %d is successfully deleted from the Stack\n", deletedItem );
		    
		    return;
		}
