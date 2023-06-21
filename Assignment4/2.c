/*2. Define a structure variable of type 'struct Date' as given below:
struct Date
{
char date;
char month;
short year;
};
Ask the user to enter date and read into the structure variable.
Finally print the values in the structure variable in the format
'DD/MM/YYYY'. Again print the date in the format 'DD MMM YYY', where
MMM is the name of the month in three characters like 'Jan' .. 'Dec'.*/

#include<stdio.h>
struct Date
{
	char date;
	char month;
	short year;
};

char *m[]={"Jan","Feb","March","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};

int main()
{
	struct Date dt;
	printf("Enter the date:\n");
	scanf("%hhd",&dt.date);
	printf("Enter the month:\n");
	scanf("%hhd",&dt.month);
	printf("Enter the year:\n");
	scanf("%hd",&dt.year);

	printf("%02d/%02d/%02d\n",dt.date,dt.month,dt.year);
	
	printf("%02d %s %02d\n",dt.date,m[dt.month-1],dt.year);
}

