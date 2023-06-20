/*4. Define a small integer (char) varialbe. Read a small number from the
user into this variable. Finally print the variable.
Also print the variable as hex number and octal number.*/
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the number:\n");
	scanf("%hhd",&ch);
	printf("In character:%c\n",ch);
	printf("In Hex :%x\n",ch);
	printf("In Octal:%o\n",ch);
}
