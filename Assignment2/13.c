/*12. Read month from the user as integer. User should enter 1 for the month
January, 2 for February and so on. The program should print the number
days in the given month. Use switch() statement. Assume that year is
not a leaf year.*/
/*13. Redo the above program. Now read both month and year from the user.
Print the number of days in the given month. Assume that year is leaf
year if remainder is zero when devided by 4.*/

#include<stdio.h>
int main()
{
	int month,years;
	printf("Enter year:\n");
	scanf("%d",&years);
	printf("Enter 1 for the month January, 2 for February and so on.the month:\n");
	scanf("%d",&month);

	switch(month)
	{
		case 2:if((years%4==0 && years%100!=0) ||(years%400==0))
			    printf("The number of day in the given month is 29 Days\n");
		       else
			    printf("The number of day in the given month is 28 Days\n");
			break;
		case 1:
		case 3:
		case 5:
		case 7:
		case 10:
		case 12:printf("The number of day in the given month is 31 Days\n");
			break;
		case 4:
		case 6:
		case 8:
		case 9:
		case 11:printf("The number of day in the given month is 30 Days\n");
			break;
		default: printf("Invalid Input\n");
	}
}
		
		
		
		
		
		
