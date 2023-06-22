/*2. Write the following function:
double getSphereSurfaceArea(double radius);
Write the main() function to call and test the above function.*/

#include<stdio.h>
#define PI 3.14
double getSphereSurfaceArea(double radius)
{
	return 4.0 * PI * radius * radius;
}

int main()
{
	double radius,volume;
	printf("Enter the radius of sphere:\n");
	scanf("%lf",&radius);
	volume=getSphereSurfaceArea(radius);
	printf("Area of surface sphere: %lf\n",volume);
}
