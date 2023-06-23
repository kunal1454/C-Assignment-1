/*8.void convertSecondsToTime(int seconds, struct Time *tm);
This function takes the total number of seconds and pointer to struct Time.
It converts the seconds into hours, minutes and seconds. And stores them
in the Time structure.
In the main() function, define seconds variable and struct Time variable.
Read seconds from the user, call the function by passing seconds and
address of struct Time variable. After returning from the function
print the structure variable.*/

#include<stdio.h>
struct Time
{
int hour;
int min;
int sec;
};

void convertSecondsToTime(int seconds,struct Time *tm)
{
	tm->hour=seconds/3600;
	tm->min=(seconds%3600)/60;
	tm->sec=(seconds%3600)%60;
}

int main()
{
	struct Time time;
	int seconds;
	printf("Enter seconds:\n");
	scanf("%d",&seconds);
	
	convertSecondsToTime(seconds,&time);
	printf("Time :%02d:%02d:%02d\n",time.hour,time.min,time.sec);
}

