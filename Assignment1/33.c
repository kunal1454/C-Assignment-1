/*33. Read a short variable from the user as hex number. Also read the bit
position to clear, from the user. Now clear the specified bit in the hex
number. Finally print the number in hex, after clearing the given bit.*/

#include<stdio.h>
int main()
{
	short int num,i;
	int pos;
	printf("Enter hexa number:\n");
	scanf("%hx",&num);
	printf("Enter the position:\n");
	scanf("%d",&pos);
	num&=~(1<<pos);
	printf("After Clearing the given bit :%hx\n",num);
}
