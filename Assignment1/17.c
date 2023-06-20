/*17. Extend the above program to convert sin, cos and tan values back to
radians by using inverse functions of sin, cos and tan.*/

#include<stdio.h>
#include<math.h>
#define pi 3.14
int main()
{
	double angle,radians,sine,cose,tang,asine,acose,atang;
	printf("Enter angle in degrees:\n");
	scanf("%lf",&angle);
	radians=angle*(pi/180);
	sine = sin(radians);
	cose = cos(radians);
	tang = tan(radians);
	asine = asin(sine);
	acose = acos(cose);
	atang = atan(tang);
	printf("Degrees: %lf\n",angle);
	printf("Radians:%lf\n",radians);
	printf("Sine:%lf\n",sine);
	printf("cos:%lf\n",cose);
	printf("Tangent:%lf\n",tang);
	printf("Inverse Sine:%lf\n",asine);
	printf("Inverse cos:%lf\n",acose);
	printf("Inverse Tangent:%lf\n",atang);
}
