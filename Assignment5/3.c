/*3. Write the following function:
double getSphereWeight(double radius, double density);
Write the main() function to call and test the above function.*/

#include<stdio.h>
#define PI 3.14
double getSphereWeight(double radius, double density)
{
	double volume;
	volume= (4.0/3.0) * PI * radius * radius * radius;
	return density * volume;
}

int main()
{
	double radius,density,weight;
	printf("Enter the radius of sphere:\n");
	scanf("%lf",&radius);
	printf("Enter the Density of sphere:\n");
	scanf("%lf",&density);

	weight=getSphereWeight(radius,density);
	printf("Weight of sphere: %lf\n",weight);
}
