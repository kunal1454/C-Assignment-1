/*35. An electric pole is present on one side of the road. From the opposite
side of the road, the tip of the pole is making certain angle. Ask the
user to enter the angle in degrees and width of the road in meters.
Calculate the height of the pole and print it.
Formula: TAN theta = pole_height / road_width
Use math function tan().*/

#include<stdio.h>
#include<math.h>
int main()
{
	double angle,width,height;
	printf("Enter angle in degrees:\n");
	scanf("%lf",&angle);
	printf("Enter width of road in meters:\n");
	scanf("%lf",&width);

	height= width * tan(angle);
	printf("The height of the pole: %lf\n",height);
}

