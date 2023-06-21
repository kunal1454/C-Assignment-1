/*5. Read a line from the user and print the number of capital letters present
in the string.*/

#include<stdio.h>
#include<string.h>
int main()
{
	char str[80];
	puts("Enter the string:");
	scanf("%[^\n]",str);
	int i,cnt=0;
	
	for(i=0;str[i];i++)
	{
		if(str[i]>=65&& str[i]<=90)
			cnt++;
	}
	printf("The number of capital letters present in string :%d\n",cnt);
}
