/*6.Define an array of 5 integers and one integer pointer.
Store the starting address of array into pointer variable.
Using scanf() read 5 numbers into the array, from the user
Print these 5 numbers by using, pointer variable
Again read 5 numbers from the user, now through the pointer variable
Print the values in the array*/

#include<stdio.h>
int main()
{
	int arr[5],*ptr;
	ptr=arr;
	int i;
	printf("Enter array elements:\n");
	for(i=0;i<5;i++)
	scanf("%d",&arr[i]);
	
	printf("These 5 numbers by using, pointer variable:\n");
	for(i=0;i<5;i++)
	printf("%d\n",ptr[i]);
	
	printf("Enter array elements using pointer varible:\n");
	for(i=0;i<5;i++)
	scanf("%d",ptr+i);
	
	printf("These 5 numbers by using, array:\n");
	for(i=0;i<5;i++)
	printf("%d\n",arr[i]);

}

