/*10. Define an integer pointer variable. Using malloc() function allocate
20 bytes of memory (to hold 5 integers). Store the allocated address in
the pointer variable. So now this pointer varialbe is pointing to an array
of 5 integers.
Read 5 integers from the user and fill the allocated array.
Print the values in the allocated array.
Note:
This assignment is similar to assignment 6. In assignment 6, pointer
is pointing to statically allocated array. Here pointer is pointing
to dynamically allocated array.*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,i;
	p=malloc(5*sizeof(int));
	if(p==NULL)
	{
		printf("Memory not allocate\n");
		return 0;
	}

	printf("Enter array elements:\n");
	for(i=0;i<5;i++)
	scanf("%d",&p[i]);
	printf("Array elements:\n");
	for(i=0;i<5;i++)
	printf("%d\n",p[i]);
	free(p);
}


