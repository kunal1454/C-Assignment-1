/*29. Ask user to enter a small letter. Read the small letter into a char
variable. Clear the 5th bit in this char variable to 0. Now print this char
variable as character.*/
#include<stdio.h>
int main()
{
	char ch;
	int pos;
	printf("Enter small letter character:\n");
	scanf("%c",&ch);
	printf("Enter position:\n");
	scanf("%d",&pos);
	ch&=~(1<<pos);
	printf("After clear the position character is %c\n",ch);
}
