/*4. Read a character from the user, and print whether the character is
Capital letter / Small letter / Numeric digit / Other.*/

#include<stdio.h>
int main()
{
	char ch;
	printf("Enter character:\n");
	scanf("%c",&ch);
	if(ch>=65 && ch<=90)
		printf("Capital letter\n");
	else if(ch>=97 && ch<=122)
		printf("Small letter\n");
	else if(ch>=48 && ch<=57)
		printf("Numeric digit\n");
	else
		printf("Other\n");
}
