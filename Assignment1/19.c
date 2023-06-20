/*19. Write a program to use the math function pow(). Read base and power
values fron the user as double variables. Use pow() to calculate the
base raised by the power. Finally print the base, power and base raised
by power.*/

#include<stdio.h>
#include<math.h>
int main()
{
	double base,power;
	printf("Enter base value:\n");
	scanf("%lf",&base);
	printf("Enter power:\n");
	scanf("%lf",&power);
	printf("Base:%lf\n",base);
	printf("Power:%lf\n",power);
	printf("Base raise by power:%lf\n",pow(base,power));
}

