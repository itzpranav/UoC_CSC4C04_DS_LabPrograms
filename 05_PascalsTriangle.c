/*    05. Implement Pascals Triangle using a 2-dimensional array. 




      What is a Pascal triangle? :- blob:https://www.youtube.com/21ae694f-a1c0-46fb-906e-57422e85a0b0

*/



#include<stdio.h>
void printPascal(int n) 
{ 

int arr[n][n];				// array to store generated pscal triangle values 
for (int line = 0; line < n; line++)	// Iterate through every line and print integer(s) in it 
	{ 
		for (int j=0;j<(n-line-1);j++)
				    printf("  ");	// Loop for Space 
		     
		    for (int i = 0; i <= line; i++)	// Every line has number of integers equal to line number
		    { 
			
				
		     
		    if (line == i || i == 0)		// First and last values in every row are 1
			{
				arr[line][i] = 1; 
			 	printf(" %d ", arr[line][i]);
		    	} 
		   else 				// Other values are sum of values just above and left of above
		 	{
				arr[line][i] = arr[line-1][i-1] + arr[line-1][i]; 
				printf(" %d ", arr[line][i]);
			}	  
		  
		    } 
		    printf("\n"); 

	} 
}

	void main() 
		{ 
			int n;
			printf("Enter the NO: of rows in your Pascals Triangle");
			scanf("%d",&n);
			printPascal(n);  
		} 

