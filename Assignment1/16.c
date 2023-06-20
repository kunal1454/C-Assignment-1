/*16. Extend the above program to calculate the cos and tan values for the
given degrees by using math library functions cos() and tan().*/

#include<stdio.h>
#include<math.h>
#define pi 3.14
int main()
{
	double angle,radians,sine,cose,tang;
	printf("Enter angle in degrees:\n");
	scanf("%lf",&angle);
	radians=angle*(pi/180);
	sine = sin(radians);
	cose = cos(radians);
	tang = tan(radians);
	printf("Degrees: %lf\n",angle);
	printf("Radians:%lf\n",radians);
	printf("Sine:%lf\n",sine);
	printf("cos:%lf\n",cose);
	printf("Tangent:%lf\n",tang);
}
