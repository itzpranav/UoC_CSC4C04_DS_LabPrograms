/*

	Aim 
		Implement Quick sort

	Algorithm

		1.start 
		2. read the input array size
		3.read the array elements
		4. call function QuickSort passing array,lower index and upper index
		5. print the sorted array
		6. stop..

	procedure:

		quickSort(array, leftmostIndex, rightmostIndex)
			  if (leftmostIndex < rightmostIndex)
			    pivotIndex <- partition(array,leftmostIndex, rightmostIndex)
			    quickSort(array, leftmostIndex, pivotIndex)
			    quickSort(array, pivotIndex + 1, rightmostIndex)

		partition(array, leftmostIndex, rightmostIndex)
			  set rightmostIndex as pivotIndex
			  storeIndex <- leftmostIndex - 1
			  for i <- leftmostIndex + 1 to rightmostIndex
			  if element[i] < pivotElement
			    swap element[i] and element[storeIndex]
			    storeIndex++
			  swap pivotElement and element[storeIndex+1]
			return storeIndex + 1

*/

#include<stdio.h>
void swap(int *,int *);
void quickSort(int array[],int low, int high);
int partition(int array[], int low, int high);
int main()
{
    int i, n, a[10];
    printf(" \t\t Quick SORT \n ================================================\n\n");
    printf("Enter the number of elements :: ");
    scanf("%d",&n);
    printf("Enter the elements :: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    quickSort(a,0,n-1);
    printf("The sorted elements are :: \n");
    for(i = 0; i < n; i++)
        printf("%d  ",a[i]);
    printf("\n\n");
    return 0;
}



void quickSort(int array[], int low, int high)
{
  if (low < high)
	{   
    //Select pivot position and put all the elements smaller than pivot on left and greater than pivot on right
    int pi = partition(array, low, high);    
    quickSort(array, low, pi - 1);		// Sort the elements on the left of pivot
    quickSort(array, pi + 1, high);		// Sort the elements on the right of pivot
  }
}

int partition(int array[], int low, int high)
	{  
	  int pivot = array[high];			// Select the pivot element
	  int i = (low - 1);
	  for (int j = low; j < high; j++)//Put elements smaller than pivot on left&greater than pivot on right of pivot
		{
	    		if (array[j] <= pivot)
				{
	      				i++;
	      				swap(&array[i], &array[j]);
	    			}
	  	}

	  swap(&array[i + 1], &array[high]);
	  return (i + 1);
	}

void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}
