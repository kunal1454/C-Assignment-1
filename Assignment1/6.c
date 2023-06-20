/*6. Define two integer variables. Read two numbers from the user into these
variables. Next calculate and print the sum, difference, product,
quotient and remainder.*/
#include<stdio.h>
int main()
{
	int num1,num2,res;
	printf("Enter two number:\n");
	scanf("%d%d",&num1,&num2);
	res=num1+num2;
	printf("Sum : %d + %d =%d\n",num1,num2,res);
	res=num1-num2;
	printf("Difference :%d - %d =%d\n",num1,num2,res);
	res=num1*num2;
	printf("Producat :%d * %d =%d\n",num1,num2,res);
	res=num1/num2;
	printf("Quotient :%d / %d =%d\n",num1,num2,res);
	res=num1%num2;
	printf("Remainder :%d %% %d =%d\n",num1,num2,res);
}
