/*3. Define a character (char) varialbe. Read a character from the user into
this variable. Finally print the character in the variable.
Also print the char variable as decimal number and also as hex number.*/
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter character:\n");
	scanf("%c",&ch);
	printf("Character: %c\n",ch);
	printf("In Decimal: %d\n",ch);
	printf("In Hex : %x\n",ch);
}
