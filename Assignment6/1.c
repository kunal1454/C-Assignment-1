/*1.
Define an integer pointer variable with name 'pi'. Define this pointer
as global variable, not local variable. Now print the following:
­ Size of pointer variable using sizeof operator
­ Print the address of this pointer variable
­ Print the value present in this pointer variable (which is supposed to
be an address).
Could you guess, what will be the value, present in this pointer variable ?*/

#include<stdio.h>
int *pi;
int main()
{
	printf("Size of pointer variable :%lu\n",sizeof(pi));
	printf("The address of this pointer variable:%p\n",(void*)&pi);
	printf("The value present in this pointer variable:%p\n",(void*)pi);

}
