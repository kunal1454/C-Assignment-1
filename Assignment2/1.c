/*1. Read an integer number from the user and print whether the number is
even number or odd number. Check the first bit (0th bit), if first bit
is one, the number is odd, else number is even*/

#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number:\n");
	scanf("%d",&num);
	if(num&1==1)
		printf("%d is odd\n",num);
	else
		printf("%d is even\n",num);
}
