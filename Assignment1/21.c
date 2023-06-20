/*21. Read the radius of a sphere from the user. Calculate the volume of the
sphere and print it. Use all variables of type 'double' only.
Formula for volume of sphere is : (4.0/3.0) * PI * r * r * r*/

#include<stdio.h>
#define pi 3.14

int main()
{
	double r,volume;
	printf("Enter radius:\n");
	scanf("%lf",&r);
	volume=(4.0/3.0)*pi*r*r*r;
	printf("Radius: %lf\n",r);
	printf("The volume of the sphere: %lf\n",volume);
}


