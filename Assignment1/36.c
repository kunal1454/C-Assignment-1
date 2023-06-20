/*36. Read the time from the user as hours, minutes and seconds. Convert
the time to total number of seconds.*/

#include<stdio.h>
int main()
{
	float hr,min,sec;
	printf("Enter hours:\n ");
        scanf("%f",&hr);
	printf("Enter minutes:\n");
        scanf("%f",&min);	
	printf("Enter seconds:\n");
	scanf("%f",&sec);

	int total_seconds=(hr*3600)+(min*60)+sec;

	printf("Total seconds :%d\n",total_seconds);
}
