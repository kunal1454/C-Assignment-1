/*2. Read five numbers from the user into an array of 5. Calculate the smallest
number, largest number, total and average. Finally print these calculated
values.*/
#include<stdio.h>
int main()
{
	int arr[5],i,total=0,small,big;
	printf("Enter array number:\n");
	for(i=0;i<5;i++)
	scanf("%d",&arr[i]);
	
	small=arr[0];
	big=arr[0];
	for(i=1;i<5;i++)
	{
		if(arr[i]>big)
		big=arr[i];
		if(arr[i]<small)
		small=arr[i];
	}
	printf("smallest number: %d\n",small);
	printf("Bigest number: %d\n",big);
	for(i=0;i<5;i++)
	{
		total+=arr[i];
	}
	float average=total/5;
	printf("Total=%d\n",total);
	printf("Average=%.2f\n",average);
}	
