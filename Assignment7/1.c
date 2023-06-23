/*1.
Write the following function:
int getLargestNum(int *nums, int count);
This function takes an integer pointer (that is array address) as first
parameter and size of array (i.e. number of integers in array) as second
parameter. This function should find and return the largest number
present in the array.
In the main() function, define an array of 5 integers, ask the user to
enter 5 integers. Read 5 integers into the array. Call the above
function and print the largest number returned by the function.*/

#include<stdio.h>
#define size 5
int getLargestNum(int *nums,int count)
{
	int big,i;
	big=nums[0];
	for(i=1;i<count;i++)
	{
		if(nums[i]>big)
		big=nums[i];
	}
	return big;
}
int main()
{
	int arr[size], *p;
	int i;
	p=arr;
	printf("Enter the array elements:\n");
	for(i=0;i<size;i++)
		scanf("%d",&p[i]);
	printf("Array Element:\n");
	for(i=0;i<size;i++)
		printf("%d ",p[i]);
	printf("\n");
	printf("largest number in array:%d\n",getLargestNum(p,size));
}


