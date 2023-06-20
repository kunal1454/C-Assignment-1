/*24. Following is the formula for the compound interest
A = P * ( (1 + (r/n)) ** (n*t) )
Note: ** means 'Power of'
P = Principal amount (the initial amount you borrow or deposit)
r = Annual rate of interest
t = Number of years the amount is deposited or borrowed for
A = Amount of money accumulated after n years, including interest
n = Number of times the interest is compounded per year
Write a program which reads P,r,n and t. Use all variables of type
double only. Compute the value of 'A' and print it.
Hint: Use 'power of' function pow().*/

#include<stdio.h>
#include<math.h>
int main()
{
	double P,r,n,t,A;
	printf("Principal amount:\n");
	scanf("%lf",&P);
	printf("Annual rate of interest:\n");
	scanf("%lf",&r);
	printf("Number of years the amount is deposited or borrowed for:\n");
	scanf("%lf",&t);
	printf("Number of times the interest is compounded per year:\n");
	scanf("%lf",&n);

	A = P * pow(1 + (r / n), n * t);
	printf("A=%lf\n",A);
}
