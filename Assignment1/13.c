/*13. Define two double variables with names as 'degrees' and 'radians'.
From the user read degrees. Convert the degrees to radians and store in the
'radians' variable. Finally print the degrees and radians.*/
#include<stdio.h>
#define pi 3.14
int main()
{
	double degrees,radians;
	printf("Enter degrees:\n");
	scanf("%lf",&degrees);

	radians=degrees*(pi/180);
	printf("Degrees: %.4lf\n",degrees);
	printf("Radians: %.4lf\n",radians);
}
