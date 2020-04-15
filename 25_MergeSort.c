/*

	Aim 
		Implement merge sort

	Algorithm

		1.start 
		2. read the input array size
		3.read the array elements
		4. call function merge sort passing array,lower index and upper index
		5. print the sorted array
		6. stop..

	procedure:

		

*/

#include<stdio.h>
void merge(int *,int, int , int );
void mergesort(int *a, int low, int high);
int main()
{
    int i, n, a[10];
    printf(" \t\t Merge SORT \n ================================================\n\n");
    printf("Enter the number of elements :: ");
    scanf("%d",&n);
    printf("Enter the elements :: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    mergesort(a,0,n-1);
    printf("The sorted elements are :: \n");
    for(i = 0; i < n; i++)
        printf("%d  ",a[i]);
    printf("\n\n");
    return 0;
}

void mergesort(int *a, int low, int high)
{
    int mid;
    if (low < high)
    {
mid=(low+high)/2;
mergesort(a,low,mid);
mergesort(a,mid+1,high);
merge(a,low,high,mid);
    }
    return;
}
// Merge sort concepts starts here
void merge(int *a, int low, int high, int mid)
{
    int i, j, k, c[50];
    i = low;
    k = low;
    j = mid + 1;
    while (i <= mid && j <= high)
    {
if (a[i] < a[j])
{
    c[k] = a[i];
    k++;
    i++;
}
else
{
    c[k] = a[j];
    k++;
    j++;
}
    }
    while (i <= mid)
    {
c[k] = a[i];
k++;
i++;
    }
    while (j <= high)
    {
c[k] = a[j];
k++;
j++;
    }
    for (i = low; i < k; i++)
    {
a[i] = c[i];
    }
}
