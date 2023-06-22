/*6. Write the following function. This function returns total number of seconds
elapsed at the given time
int getTotalSecondsElapsed(short hour, short min, short sec);
Write the main() function to call and test the above function.*/

#include<stdio.h>
int getTotalSecondsElapsed(short hour, short min, short sec)
{
	return (hour*3600+min*60+sec);

}
int main()
{
	short hour,min,sec;
	printf("Enter hours:\n");
	scanf("%hd",&hour);
	printf("Enter min:\n");
	scanf("%hd",&min);
	printf("Enter sec:\n");
	scanf("%hd",&sec);
	
	int seconds=getTotalSecondsElapsed(hour,min,sec);
	printf("Total Seconds: %d\n",seconds);
}
