/*10. Read three integers a, b, and c from the user.
Write the condition to check if a, b and c are equal.
Write the condition to check a is bigger than b and c.
Write the condition to check a is smaller than b and c.
Print the condition result in each case.
Note: Use logical operators to combine the conditional operations on these
variables.*/
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter a:\n");
	scanf("%d",&a);
	printf("Enter b:\n");
	scanf("%d",&b);
	printf("Enter c:\n");
	scanf("%d",&c);
	if(a==b && a==c)
		printf("a,b,c value are equal\n");
	if(a>b && a>c)
		printf("a is bigger than b and c\n");
	if(a<b && a<c)
		printf("a is smaller than b and c\n");
}
