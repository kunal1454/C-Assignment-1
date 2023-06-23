/*7. Write the following function. This function is same as function written in
the above assignment. But takes structure Time as parameter.
Struct Time is specified in the assignments on structures.
int getTotalSecondsElapsed(struct Time t);
Write the main() function to call and test the above function.*/
/*8. Write the following function. This function is reverse of previous
function. It takes total seconds as input and returns struct time.
struct Time getTotalSecondsElapsed(int totalSeconds);
Write the main() function to call and test the above function.*/
#include<stdio.h>
struct Time{
	short hour;
	short min;
	short sec;
};
struct Time getTotalSecondsElapsed(int totalSeconds)
{
	struct Time time;
	time.hour=totalSeconds/3600;
	time.min=(totalSeconds%3600)/60;
	time.sec=(totalSeconds%3600)%60;
	return time;

}
int main()
{
	struct Time t;
	int totalseconds;
	printf("Enter Total Seconds:\n");
	scanf("%d",&totalseconds);
	
	t=getTotalSecondsElapsed(totalseconds);
	printf("Time: %02d:%02d:%02d\n",t.hour,t.min,t.sec);
}
