/*30. Read a short variable from the user as hex number. Print the value of
bit number 0 and bit number 9. Note that value of bit will be either zero
or one.*/
#include<stdio.h>
int main()
{
	short int num;
	printf("Enter Hexadecimal number:\n");
	scanf("%hx",&num);
	printf("The value of bit number 0 is %d\n",(num>>0)&1);
	printf("The value of bit number 9 is %d\n",(num>>9)&1);
}
