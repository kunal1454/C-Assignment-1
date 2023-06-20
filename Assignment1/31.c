/*31. Read a short variable from the user as hex number. Clear the 5th bit to 0
and set the 12th bit to 1. After clearing and setting the bits, print the
value as hex number. Verify that the 5th bit is cleared to zero and 12th
bit is set to 1.*/
#include<stdio.h>
int main()
{
	short int num,i;
	printf("Enter hexa number:\n");
	scanf("%hx",&num);
	
	printf("Before binary checking the bit set or clear:\n");
	for(i=0;i<16;i++)
	printf("%d ",(num>>i)&1);
	
	printf("\nAfter clear the 5th bit is %hx\n",num&=~(1<<5));
        printf("After set the 12th bit is %hx\n",num|=(1<<12));
	
	printf("After binary checking the bit set or clear:\n");
	for(int i=0;i<16;i++)
	printf("%d ",(num>>i)&1);
}
