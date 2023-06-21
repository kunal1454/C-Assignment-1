/*3. Define an array of 6 char variables. Ask the user to enter the marks of
6 subjects. Read these marks into the array. As each mark is from 0 to 100,
it can be stored in 8 bit integer, that is char variable.
Print whether the student is passed or failed. Take pass mark as 35.*/

#include<stdio.h>
int main()
{
	char mark[6];
	int i,pass=1;
	printf("Enter the 6 subjects marks is from 0 to 100:\n");
	for(i=0;i<6;i++)
	{
		printf("Subject:%d ",i+1);
		scanf("%hhd",&mark[i]);
	}

	for(i=0;i<6;i++)
	{
		if(mark[i]<35)
		{
			pass=0;
			break;
		}

	}
	if(pass)
	 printf("The student is pass\n");
	else
	 printf("The student is failled\n");
	
}



