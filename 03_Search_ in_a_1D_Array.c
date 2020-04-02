/*

		Aim
	-------------------


		Search an element in a 1-dimensional array (linear search)

		Algorithm
		1. Start
		2. Read the limit of array into n.
		3. [Initialize] l=0.
		4. If l<n then goto step5, otherwise goto step8
		5. Read the elements into array[i].
		6. [Increment] l=l+1 goto step4.
		7. Read the number to search.
		8. [Initialize] l=0.
		9. If l<n then goto step10, otherwise goto step13.
		10. If array[l] is equal to search item then goto step 11, otherwise goto step12.
		11. Print “Item is found at location”,l+1
		12. Print “ Item is not present”.
		13. Stop.

*/



//				Source code
//			----------------------------

	#include<stdio.h>
	void main()
		{
			 int array[50], search, l, n;
			 printf("Enter number of elements in array\n");
			 scanf("%d", &n);
			 printf("Enter %d integer(s)\n", n);
			 for (l = 0; l < n; l++)
				scanf("%d", &array[l]);
			 printf("Enter a number to search\n");
			 scanf("%d", &search);
			 for (l = 0; l<n; l++)
			 	{
					if (array[l] == search)
						{
						printf("%d is present at location %d.\n", search, l+1);
						break;
						}
			 	}
			 if (l == n)
				printf("%d isn't present in the array.\n", search);
		}
