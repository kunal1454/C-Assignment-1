/*27. Read a character into char variable and print the previous character
and the following character.*/
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter character:\n");
	scanf("%c",&ch);
	printf("character:%c\n",ch);
	printf("previous character:%c\n",--ch);
}
