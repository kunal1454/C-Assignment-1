/*18. Read a double value from the user, calculate its square root by using
math library function sqrt(). Print the given number and its square root.*/
#include<stdio.h>
#include<math.h>

int main()
{
	double num;
	printf("Enter the number:\n");
	scanf("%lf",&num);
	printf("The square root of %f is %f\n",num,sqrt(num));
}
