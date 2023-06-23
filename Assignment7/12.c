/*12. void getTotalAvgMaxMin(int *marks, int *result);
This function is similar to above function. Only difference is that
the second parameter, result is also an array of size 4. The function
finds the total, average, minimum mark and maximum mark, And writes them
in the result array.
In the main() function, define two arrays, one for six subjects marks,
and another two get four results. Read the marks from the user and
call the function, by passing marks and results array. After returning
from the function, print the values in the results array.*/

#include<stdio.h>
#define size 6
#define n 4
void getTotalAvgMaxMin(int *marks, int *result)
{
	int i;
	for(i=0;i<size;i++)
	{
		result[0]+=marks[i];
	}
	result[2]=marks[0];
	result[3]=marks[0];
	for(i=1;i<size;i++)
	{
		if(marks[i] < result[3])
		result[3]=marks[i];
		if(marks[i] > result[2])
		result[2]=marks[i];
	}
	result[1]=result[0]/size;
	
}

int main()
{
	int arr[size],arr1[n];
	
	printf("Enter 6 subject marks:\n");
	for(int i=0;i<size;i++)
	scanf("%d",&arr[i]);

	getTotalAvgMaxMin(arr, arr1);
		
	printf("Total of marks:%d\n",arr1[0]);
	printf("Average of marks:%d\n",arr1[1]);
	printf("Max  marks:%d\n",arr1[2]);
	printf("Min marks:%d\n",arr1[3]);
	
}

