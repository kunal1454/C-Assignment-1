/*5. Write the following function. This function clears the bit at the given
position to zero.
unsigned int clearBit(unsigned int val , int bitPos);
Write the main() function to call and test the above function.
In the main() function read an hexadecimal number from the user and also
read bit position from the user. Call the above function. Print the value
returned by that function in hex.
Note that reading hex number and printing hex number allows us to check if
the bit is cleared correctly or not.*/

#include<stdio.h>
unsigned int clearBit(unsigned int val , int bitPos)
{
	val&=~(1<<bitPos);
	return val;
}
int main()
{
	int num,pos,res;
	printf("Enter an Hexadecimal number:\n");
	scanf("%x",&num);
	printf("Enter the position:\n");
	scanf("%d",&pos);
	printf("The bit is after cleared correctly: %x\n",clearBit(num,pos));
}
	

