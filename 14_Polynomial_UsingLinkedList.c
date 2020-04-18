/*
	Aim 
		Implement polynomial using linked list.

	Algorithm

		1. start 
		2. Create a structure for polynomial with coeffient,exponent and pointer to next node.
		3. Declare the necessory variables
		4. read higest degree of polynomial 
		5  for each ploynomial term less than highest degree 
		6. 	read  coeffient and exponent  create polynomial node			 
		   end for
		7. display in polynomial format
		8. stop

	Procedure

		begin Create_node
			declare temporary node variables (rear,temp)
			if starting node 
				allocate memory space for a new node
				store coeffient and exponent
				then assign new(rear) node to polynomial node.(establishing connection)
				and allocate memory space for next node in the rear side and set it as rear node
			else
				store coeffient and exponent
				nd allocate memory space for next node in the rear side and set it as rear node
			end if else
		End Create_node 

*/
#include<stdio.h>
#include<stdlib.h>
struct Node 
{ 
    int coeff; 
    int pow; 
    struct Node *next; 
}; 
void create_node(int x, int y, struct Node **temp);
void show(struct Node *node);

              
	int main() 
		{ 
		   struct Node *poly = NULL; 
		   int coefTemp,i,deg;
		   printf("Enter the highest degree of polynomial:");
		   scanf("%d",&deg);    
		   for(i=0;i<=deg;i++)
			   {   
			       
			       printf("\nEnter the coeff of x^%d :",i);
			       scanf("%d",&coefTemp);
			       create_node(coefTemp,i,&poly);
			   }  
		    printf("\nExpression = ");
		    show(poly);   
		       
		   return 0; 
} 


// Function to create new node 
void create_node(int x, int y, struct Node **temp) 
{ 
    struct Node *r, *z; 
    z = *temp; 
    if(z == NULL) 
    { 
        r =(struct Node*)malloc(sizeof(struct Node)); 
        r->coeff = x; 
        r->pow = y; 
        *temp = r; 
        r->next = (struct Node*)malloc(sizeof(struct Node)); 
        r = r->next; 
        r->next = NULL; 
    } 
    else
    { 
        r->coeff = x; 
        r->pow = y; 
        r->next = (struct Node*)malloc(sizeof(struct Node)); 
        r = r->next; 
        r->next = NULL; 
    } 
} 




void show(struct Node *node) 
{ 
while(node->next != NULL) 
    { 
	if(node->pow==0)
		{
			printf("%d", node->coeff);
		}
else
    printf("%dx^%d", node->coeff, node->pow); 


    node = node->next; 
    if(node->next != NULL) 
        printf(" + "); 
    } 
} 
