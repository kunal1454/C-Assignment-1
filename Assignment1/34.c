/*34. Read a short variable from the user as hex number. Also read the
bit position, from the user. Print the value present in the 4 bits,
starting from the given bit position.*/

#include<stdio.h>
int main()
{
	short int num;
	printf("Enter the hex number:\n");
	scanf("%hx",&num);
	int i,pos;
	printf("Enter the position:\n");
	scanf("%d",&pos);
	
	for(i=0;i<16;i++)
	printf("%d ",(num>>i)&1);
	
	pos=num>>4&1;
	printf("\nThe value present in th 4th bit is %d\n",pos);
}

