/*6. Write the following function. This function returns total number of seconds
elapsed at the given time
int getTotalSecondsElapsed(short hour, short min, short sec);
Write the main() function to call and test the above function.*/
/*7. Write the following function. This function is same as function written in
the above assignment. But takes structure Time as parameter.
Struct Time is specified in the assignments on structures.
int getTotalSecondsElapsed(struct Time t);
Write the main() function to call and test the above function.*/

#include<stdio.h>
struct Time{
	short hour;
	short min;
	short sec;
};
int getTotalSecondsElapsed(struct Time t)
{
	return (t.hour*3600+t.min*60+t.sec);

}
int main()
{
	struct Time t;
	printf("Enter hours:\n");
	scanf("%hd",&t.hour);
	printf("Enter min:\n");
	scanf("%hd",&t.min);
	printf("Enter sec:\n");
	scanf("%hd",&t.sec);
	
	int seconds=getTotalSecondsElapsed(t);
	printf("Total Seconds: %d\n",seconds);
}
