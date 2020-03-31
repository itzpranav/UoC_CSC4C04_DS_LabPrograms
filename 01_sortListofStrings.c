/*

		Aim
	-------------------
		
		Write a program to sort a given list of strings

		Algorithm

		1.Start
		2.Read number of names,n
		3.Read name[n]
		4.Copy name[n] to tname[n]
		5.Repeat steps 6 to 10 for i=0 to n-1
		6.Repeat steps 7 to 10 for j=j+1 to n
		7.Check whether strcmp name[i],name[j] >0
		8.temp=name[i]
		9.name[i]=name[j]
		10.name[j]=temp
		[End of if structure]
		[End of inner loop]
		[End of outer loop]
		11.Print tname[n]
		12.Print sorted by name[n]

*/


#include<stdio.h>
#include<string.h>
void main()
		{
			 int i,j,count;
			 char str[25][25],temp[25];
			 printf("How many strings you are going to enter?: ");
			 scanf("%d",&count);
			 printf("Enter Strings one by one: ");
			 for(i=0;i<count;i++)
			 	scanf("%s",str[i]);
			 for(i=0;i<count;i++)
				{
			 	for(j=i+1;j<count;j++)
					{
				 		if(strcmp(str[i],str[j])>0)
							{
							 strcpy(temp,str[i]);
							 strcpy(str[i],str[j]);
							 strcpy(str[j],temp);
			 				}
			 		}
				}
			 printf("\n\t\t OUTPUT\n\t----------------------\n");
			 printf("\tSorted Strings List:\n");
			 for(i=0;i<count;i++)
			 	printf("\t %s \n",str[i]);
			printf("\n");
		}
