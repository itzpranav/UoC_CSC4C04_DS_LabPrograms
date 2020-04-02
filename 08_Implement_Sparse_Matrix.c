/*

		Aim
	-------------------

		Read a sparse matrix and display its triplet representation using array.
		

		Algorithm

		1. Start
		2. Declare variables i,j,m,n,c,k and a[20][20].
		3. Read number of rows and columns to m,n respectively.
		4. Repeat step5 to step 8 for i=0 to i=m-1.
		5. Repeat step6 to step 8 for j=0 to j=n-1.
		6. Read elements to a[i][j].
		7. If a[i][j]!=0 increment c, otherwise goto step8.
		8. Increment k
		[end of if strucutre]
		[end of loop]
		9. If c<k goto step10 otherwise goto step13.
		10. Repeat steps 11 to 12 for i=0 to i=m-1.
		11. Repeat step 12 for j=0 to j=n-1.
		12. If a[i][j]!=0 print ‘ i\t j\t a[i][j].
		[end of inner loop]
		[end of outer loop].
		13. Print “Not a sparse matrix”.
		14. Stop


*/

//				Source code
//			----------------------------

	#include<stdio.h>
	void main()
		{
			int i,j,m,n,c=0,k=0;
			int a[20][20];
			printf("Enter number of rows and column:");
			scanf("%d%d",&m,&n);
			printf("Enter Sparse matrix\n");
			for(i=0;i<m;i++)
				{
					for(j=0;j<n;j++)
					{
						scanf("%d",&a[i][j]);
						if(a[i][j]!=0)
							c++;
						else
							k++;
					}
				}
			if(c<k)
			{
				printf("ROW\tCOL\tVALUE\n");
				printf("%d\t%d\t%d\n",m,n,c);
				for(i=0;i<m;i++)
				{
					for(j=0;j<n;j++)
					{
						if(a[i][j]!=0)
						printf("%d\t%d\t%d\n",i,j,a[i][j]);
					}
				}
			}
			else
			printf("Not a sparse matrix\n");
		}
