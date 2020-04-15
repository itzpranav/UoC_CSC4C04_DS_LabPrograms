/*

	Aim 
		Implement Selection sort

	Algorithm

		1.start 
		2. read the input array size
		3.read the array elements
		4. call function SelectionSort passing array and size
		5. print the sorted array
		6. stop

	procedure:

		selectionSort(array, size)
			  repeat (size - 1) times
			  set the first unsorted element as the minimum
			  for each of the unsorted elements
			  	if element < currentMinimum
			  		set element as new minimum
				end if
			  end for
			  swap minimum with first unsorted position
			  end for
		end selectionSort 

*/

#include<stdio.h>
void swap(int *,int *);
void selection_sort(int A[],int);
int main()
{
    int i, n, a[10];
    printf(" \t\t Selection SORT \n ================================================\n\n");
    printf("Enter the number of elements :: ");
    scanf("%d",&n);
    printf("Enter the elements :: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    selection_sort(a,n);
    printf("The sorted elements are :: \n");
    for(i = 0; i < n; i++)
        printf("%d  ",a[i]);
    printf("\n\n");
    return 0;
}

void selection_sort(int A[ ], int n)
{
        int minimum;
        for(int i = 0; i < n-1 ; i++)
		{
             minimum = i ;//set the minimum as first element      
            for(int j = i+1; j < n ; j++ )
		{
                	if(A[j]<A[minimum])
				{          
                			minimum=j;
                		}
             	}
            swap (&A[minimum],&A[i]) ; 
        }
   }
void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}
