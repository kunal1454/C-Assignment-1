/*11. Define two float variables, read two float numbers from the user.
Print their sum, difference, product and quotient.*/
#include<stdio.h>
int main()
{
	float a,b,res;
	printf("Enter the two number:\n");
	scanf("%f%f",&a,&b);
	res=a+b;
	printf("Sum : %.2f + %.2f=%.2f\n",a,b,res);
	res=a-b;
	printf("Difference : %.2f - %.2f=%.2f\n",a,b,res);
	res=a*b;
	printf("Product : %.2f * %.2f=%.2f\n",a,b,res);
	res=a/b;
	printf("Quotient : %.2f / %.2f=%.2f\n",a,b,res);
}
