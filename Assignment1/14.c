/*14. Define a double variable with name as 'angle'. Read degrees from the user
into this 'angle'. Convert 'angle' into radians.*/
#include<stdio.h>
#define pi 3.14
int main()
{
	double angle,radians;
	printf("Enter degrees:\n");
	scanf("%lf",&angle);
	radians=angle*(pi/180);
	printf("angle to radians : %lf\n",radians);
}
