/*9.Define an integer pointer variable. Using malloc() function, allocate
4 bytes of memory and store the allocated address in the pointer variable.
Now this pointer is pointing to the dynamically allocated integer.
Read a value from the user into this allocated memory using scanf().
Print the value present in the allocated memory.
Note:
This assignment is similar to assignment 5. In assignment 5,
pointer is holding the address of integer variable. This integer variable
is statically allocated. In this assignment, pointer is pointing to
dynamically allocated variable.*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,*p;
	p=malloc(sizeof(int));
	if(p==NULL)
	{
		printf("Memory not allocated\n");
		return 0;
	}
	printf("Enter the value:\n");
	scanf("%d",&n);
	p=&n;
	printf("%d\n",*p);
}
