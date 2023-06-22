/*3.Define three pointer pointer variables pi, ps and pc. One is integer
pointer, second is short pointer and last is char pointer. Print the
size of each pointer using sizeof operator. What do you expect the size
of these pointers?
Now assign all these three pointers with a value of 100. Use typecast
to avoid warning. Now print all the three pointers. Next increment or
add one (pi++; or pi = pi + 1;) to all three pointer variables.
After incrementing, print the values of all three pointers. You should
be able to expect the values it is going to print.*/

#include<stdio.h>
int main()
{
	int *pi;
	short int *ps;
	char *pc;
	printf("Size of integer pointer:%lu\n",sizeof(pi));
	printf("Size of short integer pointer:%lu\n",sizeof(ps));
	printf("Size of character pointer:%lu\n",sizeof(pc));
	pi=(int*)100;
	ps=(short*)100;
	pc=(char*)100;
	printf("Value :%p\n",pi);
	printf("Value :%p\n",ps);
	printf("Value :%p\n",pc);

	pi++;
	ps++;
	pc++;

	printf("After incrementing:\n");
	printf("Value :%p\n",pi);
	printf("Value :%p\n",ps);
	printf("Value :%p\n",pc);

}
