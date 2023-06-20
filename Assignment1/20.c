/*20. Read angle in degrees as double variable. Calculate sine and cos of
given angle. Compute square root of , sum of sin square and cos square.
For any angle this value should be 1.*/

#include<stdio.h>
#include<math.h>
#define pi 3.14
int main()
{
	double angle,sine,cose;
	printf("Enter angle in degrees\n");
	scanf("%lf",&angle);
	sine=sin(angle);
	cose=cos(angle);

	int sum=sqrt((sine*sine)+(cose*cose));
	printf("Angle: %lf\n",angle);
	printf("Sine: %lf\n",sine);
	printf("Cose: %lf\n",cose);
	printf("Sum of quart root of sine square and cos square %d\n",sum);

}
