/*

		Aim
	-------------------

			Search an element in the two-dimensional array


			Algorithm
				1. Start
				2.[Initialize] f=0,loc=0,loc1=0
				3.Read the size of the array.
				4.[Initialize] i=1
				5.If i<=m goto step 6 otherwise goto step11
				6.[initialize] j=1
				7.If j<=n goto step 7 otherwise goto step10
				8.Read the elements into a[i][j]
				9.[increment] j=j+1, goto step7
				10.[increment] i=i+1, goto step5
				11.Read the item to be searched
				12.[initialize] i=1
				13.If i<=m then goto step14 otherwise goto step19
				14.[initialize] j=0
				15.If j<=n then goto step16 otherwise goto step13
				16.If a[i][j]==item, then set loc=i, loc1=j, f=1, goto step19
				17.[increment] j=j+1, goto step15
				18.[increment] i=i+1, goto step 13
				19. If f=1, then print item is at row: loc and column: loc1.
				Otherwise print “Element not found”
				20. Stop


*/

//				Source code
//			----------------------------

		#include<stdio.h>
		#include<string.h>
		void main()
			{
				int i,j,m,n,item,loc=0,loc1=0,f=0;
				int a[20][20];
				printf("\nEnter size of the array\n");
				scanf("%d%d",&m,&n);
				printf("\n\tEnter The Value Of Array:");
				for(i=1;i<=m;i++)
				{
					for(j=1;j<=n;j++)
					{
						scanf("%d",&a[i][j]);
					}
				}
				printf("\n\tEnter The Value To Be Searched:");
				scanf("%d",&item);
				for(i=1;i<=m;i++)
					{
						for(j=1;j<=n;j++)
						{
							if(item==a[i][j])
							{
								loc=i;
								loc1=j;
								f=1;
							}
						}
				}
				if(f==1)
					printf("\n\tThe Item is at Row:%d And Column:%d",loc,loc1);
				else
					printf("Element not found");
					printf("\n\n\t\tSearch Completed.\n");
		}





