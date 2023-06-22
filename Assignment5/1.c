/*1. Write the following function:
double getSphereVolume(double radius);
This function takes the radius of sphere as parameter and returns the
volume of sphere. Write a main() function to test this function. To test
this function, in main() function read radius from the user and call this
function. Finally print the value returned by this function.
Note that, inside the getSphereVolume() function, you should not print the
volume. This function should calculate and return the volume. Printing of
volume should be done only from the main() function.*/

#include<stdio.h>
#define PI 3.14
double getSphereVolume(double radius)
{
	return (4.0/3.0) * PI * radius * radius * radius;
}

int main()
{
	double radius,volume;
	printf("Enter the radius of sphere:\n");
	scanf("%lf",&radius);
	volume=getSphereVolume(radius);
	printf("Volume of sphere: %lf\n",volume);
}
