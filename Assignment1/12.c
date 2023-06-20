/*12. Define two double variables, read two float numbers from the user.
Print their sum, difference, product and quotient.*/
#include<stdio.h>
int main()
{
	double a,b,res;
	printf("Enter the two float number:\n");
	scanf("%lf%lf",&a,&b);
	res=a+b;
	printf("Sum : %.2lf + %.2lf=%.2lf\n",a,b,res);
	res=a-b;
	printf("Difference : %.2lf - %.2lf=%.2lf\n",a,b,res);
	res=a*b;
	printf("Product : %.2lf * %.2f=%.2lf\n",a,b,res);
	res=a/b;
	printf("Quotient : %.2lf / %.2lf=%.2lf\n",a,b,res);
}
