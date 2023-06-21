/*1. Define an array of 5 int variables. Ask user to enter 5 numbers.
Read five numbers into this array of five. Finally print these 5 numbers.*/

#include<stdio.h>
int main()
{
	int arr[5],i;
	printf("Enter the number:\n");
	for(i=0;i<5;i++)
	scanf("%d",&arr[i]);
	printf("You enter number:\n");
	for(i=0;i<5;i++)
		printf("%d = %d\n",i,arr[i]);
}
