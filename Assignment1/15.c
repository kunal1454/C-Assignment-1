/*15. Read angle in degrees from the user into a double variable. Convert the
degrees to radians. Use math library function sin() and calculate the
sine of given angle. Print the degrees given, radians and its sign value.*/
#include<stdio.h>
#include<math.h>
#define pi 3.14
int main()
{
	double angle,radians,sine;
	printf("Enter angle in degrees:\n");
	scanf("%lf",&angle);
	radians=angle*(pi/180);
	sine = sin(radians);
	printf("Angle: %lf\n",angle);
	printf("Radians:%lf\n",radians);
	printf("Sine:%lf\n",sine);
}
