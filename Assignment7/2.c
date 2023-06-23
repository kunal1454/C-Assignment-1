/*2.This assignment is same as above one, but main function is little bit
different. In the main() function, define an array of 100 integers.
First ask the user, how many numbers she/he wish to enter. Read this
into a 'count' variable. The count must be less than 100, as our array
size is 100. Read count of integers from the user and call the
getLargestNum() function. Finally print the value returned by the function.*/

#include<stdio.h>

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
	int arr[100];
	int i,count,size;
	printf("Enter the size of array:\n");
	scanf("%d",&count);

	printf("Enter the array elements:\n");
	for(i=0;i<count;i++)
	{
		printf("Enter value in index %d :",i+1);
		scanf("%d",&arr[i]);
	}
	printf("Array Element:\n");
	for(i=0;i<count;i++)
		printf("%d ",arr[i]);
	printf("\n");
	printf("largest number in array:%d\n",getLargestNum(arr,count));
}


