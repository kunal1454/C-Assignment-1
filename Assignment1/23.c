/*23. Read the radius of sphere from the user. Ask user to enter the radius in
the units of centi meters only. Print the values of densities to the
user as given below:
Following are the densities of some metals:
Aluminum     2.712 grams/cm3 (grams per centimeter cube)
Copper       8.940
Gold	     19.320
Iron	     7.850
Silver	     10.490

Next ask the user to enter the density of the metal of the sphere.
Finally print the weight of the sphere.
Formula for weight : volume * Density.*/
#include<stdio.h>
#define PI 3.14
int main()
{
	double r,density,weight,volume;

	printf("Enter the radius the units of centi menters only:\n");
	scanf("%lf",&r);
	printf("Enter the density of metal of the sphere:\n");
	scanf("%lf",&density);
	r=r/100;
	volume=(4.0/3.0) * PI * r * r * r;
	weight = volume * density;

	printf("Density: %.4lf\n",density);
	printf("Weight of the sphere: %.4lf\n",weight);
}



