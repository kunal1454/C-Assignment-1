/*6. Write a program to perform divisibility test. Read two numbers from the
user. Test if first number is divisible by second number without any
remainder. Based on the resule, print "Divisible Test Passed" or
"Divisible test failed".*/

#include<stdio.h>
int main()
{
	int num1,num2;
	printf("Enter the two number:\n");
	scanf("%d%d",&num1,&num2);
	if(num1%num2==0)
		printf("Divisible Test Passed\n");
	else
		printf("Divisible test failed\n");
}
