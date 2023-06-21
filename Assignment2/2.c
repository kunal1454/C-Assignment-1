/*2. Read an integer number from the user and print whether the number is
even number or odd number. Find the remainder value when the given
number is divided by 2. If remainder is zero, the number is even.
Else number is odd.*/

#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number:\n");
	scanf("%d",&num);
	if(num%2==0)
		printf("%d is even\n",num);
	else
		printf("%d is odd\n",num);
}
