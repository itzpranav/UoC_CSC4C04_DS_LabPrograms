#include<stdio.h>
#include<curses.h> // alternate to conio.h and should install supporting library(sudo apt-get install libncurses5-dev libncursesw5-dev)
#include<stdlib.h>
 
struct node
{
    int data;
    struct node *next;
}*start=NULL,*q,*t;
 
int main()
{
    int ch;
    void display();
    void delete_beg();
    void delete_end();
    int delete_pos();
 
    while(1)
    {
        printf("\n\n\t---- Singly Linked List(SLL) Menu ----\n");
        printf("\n\t1.Delete\n\t2.Display\n\t3.Exit\n\n");
        printf("Enter your choice(1-4):");
        scanf("%d",&ch);
 
        switch(ch)
        {
            case 1:
		printf("\n\t---- Delete Menu ---- \n");
           printf("\n\t1.Delete from beginning\n\t2.Delete from end\n\t3.Delete from specified position\n\t4.Exit");
                    printf("\n\nEnter your choice(1-4):");
                    scanf("%d",&ch);
 
                    switch(ch)
                    {
                        case 1: delete_beg();
                                break;
                        case 2: delete_end();
                                break;
                        case 3: delete_pos();
                                break;
                        case 4: exit(0);
                        default: printf("Wrong Choice!!");
                    }
                    break;
                    
 
            case 2: display();
                    break;
 
            case 3: exit(0);
                    default: printf("Wrong Choice!!");
        }
    }
    return 0;
}
 

 
void display()
{
    if(start==NULL)
    {
        printf("List is empty!!");
    }
    else
    {
        q=start;
        printf("The linked list is:\n");
        while(q!=NULL)
        {
            printf("%d->",q->data);
            q=q->next;
        }
    }
}
 
void delete_beg()
{
    if(start==NULL)
    {
        printf("The list is empty!!");
    }
    else
    {
        q=start;
        start=start->next;
        printf("Deleted element is %d",q->data);
        free(q);
    }
}
 
void delete_end()
{
    if(start==NULL)
    {
        printf("The list is empty!!");
    }
    else
    {
        q=start;
        while(q->next->next!=NULL)
        q=q->next;
 
        t=q->next;
        q->next=NULL;
        printf("Deleted element is %d",t->data);
        free(t);
    }
}
 
int delete_pos()
{
    int pos,i;
 
    if(start==NULL)
    {
        printf("List is empty!!");
        return 0;
    }
 
    printf("Enter position to delete:");
    scanf("%d",&pos);
 
    q=start;
    for(i=1;i<pos-1;i++)
    {
        if(q->next==NULL)
        {
            printf("There are less elements!!");
            return 0;
        }
        q=q->next;
    }
 
    t=q->next;
    q->next=t->next;
    printf("Deleted element is %d",t->data);
    free(t);
 
    return 0;
}
