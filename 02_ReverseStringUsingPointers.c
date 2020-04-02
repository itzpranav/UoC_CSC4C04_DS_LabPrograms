/*

		Aim
	-------------------
		
		Reverse a string using pointers

		Algorithm

		1.Start
		2.Declare the values int len,i
		3.Enter the tring
		4.Find length of string using strlen
		5.for(i=len;i>=0;i--)
		6.print the statement in reverse
		7.Stop


		NOTES: 
	-------------------

		[^\n] is a kind of regular expression.

		[...]: it matches a nonempty sequence of characters from the scanset (a set of characters given by ...).
		^ means that the scanset is "negated": it is given by its complement.

		^\n: the scanset is all characters except \n.

		Furthermore fscanf (and scanf) will read the longest sequence of input characters matching the format.

		So scanf("%[^\n]", s); will read all characters until you reach \n (or EOF) and put them in s.
		

*/


#include<stdio.h>
#include<string.h>
void reverse(char *);
int c=0;
void main()
	{
		char str[100];

		printf("Enter a string:\n");
		scanf("%[^\t\n]s",str);
		
		//c=strlen(str);
		reverse(str);
	}

void reverse(char *p)
		{
		int i;
		for(i=0;*(p+i)!='\0';i++)
			c++;	  //to find length of the string.(you can also use strlen& comment this if you do so)
		printf("\n\t\t OUTPUT\n\t----------------------\n");
		printf("Reverse of the string is \n");
		for(i=c;i>=0;i--)
			{
				printf("%c",*(p+i));
			}
		printf("\n\n");
}
