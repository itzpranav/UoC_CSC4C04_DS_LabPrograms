/*

	Aim 
		Search an element in the array using recursive binary search.

	Algorithm

		1.start 
		2. read the input array size
		3.read the array elements
		4. call function BinarySearct passing array,element to be searche,lower index and upper index
		5. stop
		
	procedure:

		Begin BinarySearch 
		      	if first > last 
			  print value not found;
			  end if
			else 
		      		Calculate mid element 
				if(arr[mid]==num)
			    		print number_is_found;
					end if 
		       		if arr[mid] > num 
			      		key is in lower subset of array
			     		recursively call BinarySearch passing array,item,first & mid-1 indexes
		 			end if
			  	else if (arr[mid] < num) 
			   		Key is in higher subset 
			   		recursive call  BinarySearch passing array,item, mid +1 & last indexes 
		       			end if
			end else if
		End BinarySearch 

*/


#include<stdio.h>
#include<stdlib.h>
void BinarySearch(int arr[], int num, int first, int last);
int main()
{
    int i,n,item,a[10];
    printf(" \t\t Binary Search using Recursion \n ================================================\n\n");
    printf("Enter the number of elements :: ");
    scanf("%d",&n);
    printf("Enter the elements (should be in Sorted order):: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched :: \n");
    scanf("%d",&item);
    BinarySearch(a,item,0,n-1);
    printf("\n\n");
    return 0;
}

void BinarySearch(int arr[], int num, int first, int last)
{
	if(first > last)
		{
			printf("Number is not found");
		}
	else
		{
			int mid;
			mid = (first + last)/2;
			if(arr[mid]==num)					//if value is found at mid position
				{
					printf("Element is found at index %d ",mid+1);
					exit(0);
				}
			else if(arr[mid]>num)
				{
					BinarySearch(arr, num, first, mid-1);
				}
			else
				{
					BinarySearch(arr, num, mid+1, last);
				}
		}
}
