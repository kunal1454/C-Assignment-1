/*7. Read two integer numbers from the user. Print the bigger number. If both
numbers are equal, print "Both numbers are equal\n".*/

#include<stdio.h>
int main()
{
	int num1,num2;
	printf("Enter the two number:\n");
	scanf("%d%d",&num1,&num2);
	if(num1==num2)
		printf("Both numbers are equal\n");
	else if(num1>num2)
		printf("%d is bigger\n",num1);
	else
		printf("%d is bigger\n",num2);
}
