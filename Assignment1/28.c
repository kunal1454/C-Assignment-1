/*28. Ask user to enter a capital letter. Read the capital letter into a char
variable. Set the 5th bit in this char variable to 1. Now print this char
as character.*/
#include<stdio.h>
int main()
{
	char ch;
	int pos;
	printf("Enter capital letter character:\n");
	scanf("%c",&ch);
	printf("Enter the position:\n");
	scanf("%d",&pos);
	ch=ch|(1<<pos);
	printf("After set bit position character is %c\n",ch);
}
