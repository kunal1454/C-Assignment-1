/*3.This assignment also same as first one. Only main() function is different.
In the main() function, define a pointer to integer. Ask the user to enter
count of numbers. Allocate memory for the count of integers dynamically
by calling malloc() function. Store the allocated address in the pointer
variable. Now read the count of numbers from the user into the
dynamically allocated array. Call the getLargestNum() function and print
the value returned by that function.*/

#include<stdio.h>
#include<stdlib.h>
int getLargestNum(int *nums,int count)
{
	int big,i;
	big=nums[0];
	for(i=0;i<count;i++)
	{
		if(nums[i]>big)
			big=nums[i];
	}
	return big;
}
int main()
{
	int *p;
	int count,i;
	printf("Enter count of numbers:\n");
	scanf("%d",&count);
	int arr[count];
	p=malloc(count*sizeof(int));
	p=arr;
	printf("Enter Array element:\n");
	for(i=0;i<count;i++)
		scanf("%d",&p[i]);
	printf("Array element:\n");
	for(i=0;i<count;i++)
	printf("%d ",p[i]);
		printf("\n");
	printf("Largest number in array:%d\n",getLargestNum(p,count));
}
