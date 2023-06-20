/*25. Read a character into char variable and print this as small integer in
decimal and hex.*/
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the character:\n");
	scanf("%c",&ch);
	printf("In small interger Decimal:%hd\n",ch);
	printf("In smal interger hex: %hx\n",ch);
}
