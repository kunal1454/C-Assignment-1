/*11. void getTotalAvgMaxMin(int *marks, int *tot, int *avg, int *max, int *min);
First parameter to this function is an array of marks. This marks array
size is 6. This size of array is assumed as contstant and not passsed as
parameter. The remaining four parameters are addresses of integer
variables. This function finds the total of marks, average of marks,
maximum mark and minimum mark. It places all these values in the
corresponding addresses provided.
In the main() function, define an integer array of size 6. Also
define integer variables, totalMarks, averageMark, maxMark, and minMark.
Read 6 subject marks from the user into marks array. Call the above
function by passing array and addresses of all the four variables.
After returning from the function, print the four variables.*/

#include<stdio.h>
#define size 6
void getTotalAvgMaxMin(int *marks, int *tot, int *avg, int *max, int *min)
{
	int i;
	for(i=0;i<size;i++)
	{
		*tot+=marks[i];
	}
	*max=marks[0];
	*min=marks[0];
	for(i=1;i<size;i++)
	{
		if(marks[i] < *min)
		*min=marks[i];
		if(marks[i] > *max)
		*max=marks[i];
	}
	*avg=*tot/size;
	
}
int main()
{
	int arr[size];
	int  totalmarks=0,avgmarks=0,maxmarks=0,minmarks=0;
	printf("Enter 6 subject marks:\n");
	for(int i=0;i<size;i++)
	scanf("%d",&arr[i]);
	getTotalAvgMaxMin(arr, &totalmarks,&avgmarks,&maxmarks,&minmarks);
	printf("Total of marks:%d\n",totalmarks);
	printf("Average of marks:%d\n",avgmarks);
	printf("Max  marks:%d\n",maxmarks);
	printf("Min marks:%d\n",minmarks);
}

