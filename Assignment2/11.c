/*10. Read two integer numbers from the user. Ask the user to enter any
arithmetic operator character. User can enter any one of the following
arithmetic operator character:
+ ­ * / %
Based on the character do the corresponding operation on the numbers and
print the result. Use If­elseIf­elseIf statement.*/
/*11. Redo the above program by using switch() statement.*/

#include<stdio.h>
int main()
{
	int num1,num2,res;
	char ch;
	printf("Enter the two number:\n");
	scanf("%d%d",&num1,&num2);
	printf("Enter arithmetic operator character:\n");
	scanf(" %c",&ch);
	switch(ch)
	{
		case '+':res=num1+num2;
			printf("%d + %d=%d\n",num1,num2,res);
			 break;
		case '*':res=num1*num2;
			printf("%d * %d=%d\n",num1,num2,res);
			 break;
		case '/':res=num1/num2;
			printf("%d / %d=%d\n",num1,num2,res);
			 break;
		case '%':res=num1%num2;
			printf("%d %% %d=%d\n",num1,num2,res);
			 break;

		defualt:printf("Invalid Input\n");
	}
}
