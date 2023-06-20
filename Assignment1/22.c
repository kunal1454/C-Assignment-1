/*22. Read the radius of a sphere from the user. Calculate the surface are
of the sphere and print it. Use all variables of type 'double' only.
Formula for surface area of sphere is : 4.0 * PI * r * r. */
#include<stdio.h>
#define pi 3.14
int main()
{
	double r,surface;
	printf("Enter radius:\n");
	scanf("%lf",&r);
	surface=4.0*pi*r*r;
	printf("Radius: %lf\n",r);
	printf("The Surface are of the sphere :%lf\n",surface);
}
