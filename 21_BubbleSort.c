/*

	Aim 
		Implement Bubble sort

	Algorithm

		1.start 
		2. read the input array size
		3.read the array elements
		4. call function BubbleSort passing array and size
		5. print the sorted array
		6. stop

	procedure:

		begin BubbleSort(list)
		   for all elements of list
     			 if list[i] > list[i+1]
        			 swap(list[i], list[i+1])
    			 end if
   		   end for   
   		return list   
		end BubbleSort

*/

#include<stdio.h>


void bubbleSort(int array[], int size)
 { 
  for (int step = 0; step < size - 1; ++step)// Nedd 2 loops:One for walking through array &other for comparison
	{
    		for (int i = 0; i < size - step - 1; ++i)
			{       
			      if (array[i] > array[i + 1])
				 {	
					int temp = array[i];
					array[i] = array[i + 1];
					array[i + 1] = temp;
			      	 }
    			}
  	}
 }

 
int main()
	{
	    int i, n, a[10];
	    printf(" \t\t Bubble SORT \n ================================================\n\n");
	    printf("Enter the number of elements :: ");
	    scanf("%d",&n);
	    printf("Enter the elements :: ");
	    for(i = 0; i < n; i++)
	    {
		scanf("%d",&a[i]);
	    }
	    bubbleSort(a,n);
	    printf("The sorted elements are :: \n");
	    for(i = 0; i < n; i++)
		printf("%d  ",a[i]);
	    printf("\n\n");
	    return 0;
	}
