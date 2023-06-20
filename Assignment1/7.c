/*7. Read two integers from the user (that is first define two integer variables
and then read). Perform all possible conditional operations on these
two integers. Print the results of all these conditional operations.
Following are the possible conditinal operators:
Equal to(==)
Less than(<)
Greater than(>)
Less than or Equal to (<=) Greater than or equal to(>=)
Not equal to(!=)*/
#include<stdio.h>
int main()
{
	int num1,num2;
	printf("Enter the two numbers:\n");
	scanf("%d%d",&num1,&num2);
	if(num1==num2)
	printf("Number are equal\n");
	if(num1<num2)
	printf("Number1 %d is less then number2 %d\n",num1,num2);
	if(num1>num2)
	printf("Number1 %d is greather than number2 %d\n",num1,num2);
	if(num1<=num2)
	printf("Number1 %d is less than equal to number2 %d\n",num1,num2);
	if(num1>=num2)
	printf("Number1 %d is greater than equal to number2 %d\n",num1,num2);
	if(num1!=num2)
	printf("Number are not equal\n");
}
