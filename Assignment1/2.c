/*2. Define a short integer (short) varialbe. Read a number from the user into
this variable. Finally print the value in the variable. Also print the
variable as hex number and octal number.*/
#include<stdio.h>
int main()
{
	short int num;
	printf("Enter the number:\n");
	scanf("%hd",&num);
	printf("In Decimal:%hd\n",num);
	printf("In Hex :%hx\n",num);
	printf("In Octal :%o\n",num);
}
