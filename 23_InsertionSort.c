/*

	Aim 
		Implement insertion sort

	Algorithm

		1.start 
		2. read the input array size
		3.read the array elements
		4. call function InsertionSort passing array and size
		5. print the sorted array
		6. stop

	procedure:

		InsertionSort

		mark first element as sorted
		for each unsorted element X
			'extract' the element X 
		  		for j = lastSortedIndex down to 0
		    			if current element j > X
		      			move sorted element to the right by 1
		    		break loop and insert X here
		end for
		End InsertionSort
*/

#include<stdio.h>
void InsertionSort(int a[], int n);
int main()
{
    int i, n, a[10];
    printf(" \t\t INSERTION SORT \n ================================================\n\n");
    printf("Enter the number of elements :: ");
    scanf("%d",&n);
    printf("Enter the elements :: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    InsertionSort(a,n);
    printf("The sorted elements are :: \n");
    for(i = 0; i < n; i++)
        printf("%d  ",a[i]);
    printf("\n\n");
    return 0;
}
void InsertionSort(int a[], int n)
{
    int j, i;
    int tmp;
    for(i = 1; i < n; i++)
    {
        tmp = a[i];
        for(j = i; j > 0 && a[j-1] > tmp; j--)
            a[j] = a[j-1];
        a[j] = tmp;
    }
}
