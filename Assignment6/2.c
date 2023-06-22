/*2.Define an integer pointer variable. Assign any one number into this
pointer variable. For example put 100 into this pointer variable.
You need to typecast 100 as a pointer to avoid the warning.
Next print the value in the pointer variable. It should print the value
you have assigned. Now store some other number into this pointer and
again print it.*/

#include<stdio.h>
int main()
{
	int *p;
	
	p=(int*)100;
	printf("After Typecast 100 as a pointer:%d\n",*p);
	p=(int*)200;
	printf("After store other number pointer:%d\n",*p);
}


