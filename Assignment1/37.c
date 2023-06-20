/*37. Read the total number of seconds from the user. And display it as time
like hh:mm:ss.*/

#include<stdio.h>
int main()
{
	int hr,min,sec;
	printf("Enter seconds:\n");
	scanf("%d",&sec);

	hr=sec/3600;
	sec=sec%3600;
	min=sec/60;
	sec=sec%60;
	printf("HH:MM:SS : %02d:%02d:%02d\n",hr,min,sec);
}
