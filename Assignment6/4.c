/*4.
Define an integer pointer variable. Ask user to enter some number or
address (Please note that address is also a number only). Now use
scanf() function and read the number into this pointer variable.
Finally print this pointer varible.
Note: You are always doing this with integer variables, that is reading
a number from the user. Now you are doing the same thing with pointer
variable. That is you are reading an address (number) from the user
into this pointer variable.*/

#include<stdio.h>
int main()
{
	int *p,num;
	printf("Enter some number or address:\n");
	scanf("%d",&num);
	p=(int*)num;
	printf("pointer varible:%p\n",p);
}
