/* Define an integer (int) varialbe. Read a number from the user into this
variable. Finally print the value in the variable. Also print the
variable as hexadecimal(hex) number and as octal number.*/
#include<stdio.h>
int main()
{
	int a;
	printf("Enter a number:\n");
	scanf("%d",&a);
	printf("In Decimal :%d\n",a);
	printf("In Hexadecimal :%x\n",a);
	printf("In Octal : %o\n",a);
}
