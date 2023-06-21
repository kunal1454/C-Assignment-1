/*9. Read the radius of a sphere in centimeters from the user. Ask the user
to enter the metal type of sphere as below:
printf("1:Aluminum 2:Copper 3:Gold 4:Iron 5:Silver\n");
Read the metal type as number 1 to 5. If user enters invalid metal number
print error and exit from the program.
Calculate and print the weight of sphere by using following densities of
metals:
Aluminum 2.712 grams/cm3 (grams per centimeter cube)
Copper   8.940
Gold     19.320
Iron     7.850
Silve    10.490*/

#include<stdio.h>
#define PI 3.14
int main()
{
	double radius,weight;
	int metal;
	printf("Enter the radius:\n");
	scanf("%lf",&radius);
	printf("1:Aluminum 2:Copper 3:Gold 4:Iron 5:Silver\n");
	printf("Enter the metal\n");
	scanf("%d",&metal);
	switch(metal)
	{
		case 1: weight=2.712*(4.0/3.0) * PI * radius * radius * radius;
			break;
		case 2: weight=8.940*(4.0/3.0) * PI * radius * radius * radius;
			break;
		case 3: weight=19.320*(4.0/3.0) * PI * radius * radius * radius;
			break;
		case 4: weight=7.850*(4.0/3.0) * PI * radius * radius * radius;
			break;
		case 5: weight=10.490*(4.0/3.0) * PI * radius * radius * radius;
			break;
	        default:printf("Invalid Input\n");
	}
	printf("The weight of sphere: %lf\n",weight);
}
	

