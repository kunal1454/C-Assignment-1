/*7.
int getSecondsFrmTime(struct Time *tm);
struct Time
{
int hour;
int min;
int sec;
};
This function takes the pointer to struct Time and returns the total number
of seconds for the given time.
In the main() function, define struct Time variable. Read hours, minutes
and seconds into this structure. Call the above function by passing the
address of this structure. Print the seconds returned by this function.*/

#include<stdio.h>
struct Time
{
int hour;
int min;
int sec;
};

int getSecondsFrmTime(struct Time *tm)
{
	int totalsec=tm->hour * 3600+tm->min * 60+tm->sec;
	return totalsec;
}

int main()
{
	struct Time time;
	int seconds;
	printf("Enter Hour:\n");
	scanf("%d",&time.hour);
	printf("Enter min:\n");
	scanf("%d",&time.min);
	printf("Enter seconds:\n");
	scanf("%d",&time.sec);
	seconds= getSecondsFrmTime(&time);
	printf("Total Seconds:%d\n",seconds);
}

