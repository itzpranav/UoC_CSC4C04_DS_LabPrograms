/*
	Aim 
		 polynomial addition

	Algorithm
		 
 		write with the help of  polynomial using arrays program

*/

#include<stdio.h>
#include<math.h>
struct poly
{
    float coeff;
    int exp;
};
struct poly a[50],b[50],c[50],d[50];
int main()
{
    int i;
    int deg1,deg2;  
    int k=0,l=0,m=0;
    printf("Enter the highest degree of polynomial 1:");
    scanf("%d",&deg1);   
    for(i=0;i<=deg1;i++)
    {
        printf("\nEnter the coeff of x^%d :",i);
        scanf("%f",&a[i].coeff);    
        a[i].exp = i;
    }
     
    printf("\nEnter the highest degree of polynomial 2:");
    scanf("%d",&deg2);
    for(i=0;i<=deg2;i++)
    {
        printf("\nEnter the coeff of x^%d :",i);
        scanf("%f",&b[i].coeff);
        b[l++].exp = i;
    }

    


    //Adding the polynomials
   if(deg1>deg2)
   {
       for(i=0;i<=deg2;i++) //since first is greater should start adding with smallest poly and then copy rest 
       {
           c[m].coeff = a[i].coeff + b[i].coeff;
           c[m].exp = a[i].exp;
           m++;
       }   
       for(i=deg2+1;i<=deg1;i++)
       {    
           c[m].coeff = a[i].coeff;
           c[m].exp = a[i].exp;
           m++;
       }  
   }                              
   else                   
   {                                  
       for(i=0;i<=deg1;i++)
       {                            
           c[m].coeff = a[i].coeff + b[i].coeff;
           c[m].exp = a[i].exp;
           m++;
       }          
       for(i=deg1+1;i<=deg2;i++)
       {    
           c[m].coeff = b[i].coeff;
           c[m].exp = b[i].exp;
            m++;
       }
   }
    //printing the two polynomials
    printf("\n\tExpression 1 = %.1f",a[0].coeff);
    for(i=1;i<=deg1;i++)
    {
        printf("+ %.1fx^%d",a[i].coeff,a[i].exp);
    }
	
    printf("\n\tExpression 2 = %.1f",b[0].coeff);
    for(i=1;i<=deg2;i++)
    {
        printf("+ %.1fx^%d",b[i].coeff,b[i].exp);
    }

   //printing the sum of the two polynomials
   printf("\n	Addition Result \n\tExpression   = %.1f",c[0].coeff);
   for(i=1;i<m;i++)
   {
       printf("+ %.1fx^%d",c[i].coeff,c[i].exp);
   }
return 0;
}
