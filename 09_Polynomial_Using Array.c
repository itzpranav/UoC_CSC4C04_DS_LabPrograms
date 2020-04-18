/*
	Aim 
		Implement polynomial using arrays

	Algorithm

		1.start 
		2.Create a structure for polynomial with coeffient and exponent data items.
		3. Declare the necessory variables
		4. read higest degree of polynomial 
		5  for each ploynomial term less than highest degree 
		6. 	read  coeffient and exponent
		   end for
		7. display in polynomial format
		8. stop

*/
	

/*
  structure is used to store a polynomial term.
  An array of such terms represents a polynomial.
  The "coeff" element stores the coefficient of a term in the polynomial,while
  the "exp"   element stores the exponent.  
	

	for example : Expression = 6.0+ 5.0x^1+ 3.0x^2+ 4.0x^3

			poly.Coe	poly. exp

	poly[0] 	   6		   0
	poly[1] 	   5		   1
	poly[2] 	   3		   2
	poly[3] 	   4		   3

*/

#include<stdio.h>
#include<math.h>
struct poly
{
    float coeff;
    int exp;
};          
struct poly a[50];
int main()
{
   int i;
   int deg;
   printf("Enter the highest degree of polynomial:");
   scanf("%d",&deg);    
   for(i=0;i<=deg;i++)
	   {   
	       
	       printf("\nEnter the coeff of x^%d :",i);
	       scanf("%f",&a[i].coeff);
	       a[i].exp = i;
	   }   
   printf("\nExpression = %.1f",a[0].coeff);
   for(i=1;i<=deg;i++)
   {
       printf("+ %.1fx^%d",a[i].coeff,a[i].exp);
   }        
}
