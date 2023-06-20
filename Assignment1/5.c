/*5. Define a 64 bit integer (long long) varialbe. Ask user to enter his
mobile number. Read and store the mobile number in the 64 bit integer.
Print the mobile phone number.*/
#include<stdio.h>
int main()
{
	long long int num;
	printf("Enter the Mobile number:\n");
	scanf("%lld",&num);
	printf("You Enter Mobile Number:%lld\n",num);
}
