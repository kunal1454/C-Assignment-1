/*10. Read two integer numbers from the user. Ask the user to enter any
arithmetic operator character. User can enter any one of the following
arithmetic operator character:
+ ­ * / %
Based on the character do the corresponding operation on the numbers and
print the result. Use If­elseIf­elseIf statement.*/

#include<stdio.h>
int main()
{
	int num1,num2,res;
	char ch;
	printf("Enter the two number:\n");
	scanf("%d%d",&num1,&num2);
	printf("Enter arithmetic operator character:\n");
	scanf(" %c",&ch);
	if(ch=='+')
		res=num1+num2;
	else if(ch=='*')
		res=num1*num2;
	else if(ch=='/')
		res=num1/num2;
	else if(ch=='%')
		res=num1%num2;
	else 
		printf("Invalid Input\n");
	printf("Result=%d\n",res);
}
