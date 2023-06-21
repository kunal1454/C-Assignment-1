/*1. Define a structure variable of type 'struct Time' as given below:
struct Time
{
char hour;
char min;
char sec;
};
Note that the structure fields hour, min and sec are char (small) integers.
Small integers are sufficient to store the time values.
Ask the user to enter hours, minutes and seconds. Read those values into
the structure. Finally print the time structure with the format 'HH:MM:SS'.*/

#include<stdio.h>
struct Time{
	char hour;
	char min;
	char sec;
};
int main()
{
	struct Time data;
	printf("Enter the hour:\n");
	scanf("%hhd",&data.hour);
	printf("Enter the min:\n");
	scanf("%hhd",&data.min);
	printf("Enter the seconds:\n");
	scanf("%hhd",&data.sec);

	printf("%02d:%02d:%02d\n",data.hour,data.min,data.sec);
}

