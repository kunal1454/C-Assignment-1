/*5.Write the following function:
void convertToLowerCase(char *str);
This function should convert all the capital letters present in the
given string into small (lower case) letters.
In the main() function, read a line of text (not just one word) from
the user and call the above defined function. After returning from the
function, print the line. It should contain all the lower case letters.*/

#include<stdio.h>
void convertToLowerCase(char *str)
{
	int i;
	for(i=0;str[i];i++)
	{
		if(str[i]>=65&&str[i]<=90)
		str[i]^=32;
	}
}
int main()
{
	char  str[80];
	
	printf("Enter the string:\n");
	scanf("%[^\n]s",str);
	convertToLowerCase(str);
	printf("After converting loercase string :\n%s\n",str);
}
