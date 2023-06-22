/*8.Define an integer variable, one integer pointer variable, one short
pointer and one char pointer variables. Assign value of 0x12345678 to
the integer variable. Initialize all three pointers with the address of
the integer variable. Use type casting while assigning integer address to
short and char pointers.
Now using three pointer variables, print the values pointed by these
pointers. Expect the values that are going to print.
Increment the short pointer and print again.
Increment the char pointer and print again.
Increment the char pointer and print again.
Increment the char pointer and print again.*/
#include<stdio.h>
int main()
{
	int n,*p;
	short int *q;
	char *ch;
	
	n=0X12345678;
	p=&n;
	q=(short*)&n;
	ch=(char*)&n;
	printf("The value interger pointer:0x%x\n",*p);
	printf("The value short interger pointer:0x%x\n",*q);
	printf("The value character pointer:0x%x\n",*ch);
	
	q++;
	printf("After increment short pointer:\n");
	printf("The value interger pointer:0x%x\n",*p);
	printf("The value short interger pointer:0x%x\n",*q);
	printf("The value character pointer:0x%x\n",*ch);
	ch++;
	printf("After increment character pointer:\n");
	printf("The value interger pointer:0x%x\n",*p);
	printf("The value short interger pointer:0x%x\n",*q);
	printf("The value character pointer:0x%x\n",*ch);
	ch++;
	printf("After increment character pointer:\n");
	printf("The value interger pointer:0x%x\n",*p);
	printf("The value short interger pointer:0x%x\n",*q);
	printf("The value character pointer:0x%x\n",*ch);
	ch++;
	printf("After increment character pointer:\n");
	printf("The value interger pointer:0x%x\n",*p);
	printf("The value short interger pointer:0x%x\n",*q);
	printf("The value character pointer:0x%x\n",*ch);
}
