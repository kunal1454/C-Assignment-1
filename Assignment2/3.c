/*3. Read an integer number from the user and print whether the number is
negative or positive. Find the number as negative or positive by checking
the most significant bit. That is bit 31. If bit 31 is one, it is
negative number. Else positive number.*/

#include<stdio.h>
int main()
{
	int num;
	printf("Enter the num:\n");
	scanf("%d",&num);
	if((num>>31)&1==1)
		printf("%d is negative\n",num);
	else
		printf("%d is positive\n",num);
}
