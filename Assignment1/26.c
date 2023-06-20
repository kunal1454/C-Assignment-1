/*26. Read a small int into char variable and print this small int as character.*/
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter character:\n");
	scanf("%c",&ch);
	printf("In small int as character:%hd\n",ch);
}
