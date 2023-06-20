/*9. Read two integers from the user. Perform all possible logical
operations on these two integers. Print the results of all these
logical operations. Following are the possible logical operators:
AND(&&)
OR(||)
NOT(!)*/
#include<stdio.h>
int main()
{
	int num1,num2,res;
	printf("Enter two number:\n");
	scanf("%d%d",&num1,&num2);
	res=num1&&num2;
	printf("Logical AND : %d && %d = %d\n",num1,num2,res);
	res=num1||num2;
	printf("Logical OR : %d || %d = %d\n",num1,num2,res);
	res=!num1;
	printf("Logical Not : %d is %d\n",num1,res);
	res=!num2;
	printf("Logical Not : %d is %d\n",num2,res);
}
