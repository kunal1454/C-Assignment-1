/*4. Read a a line of string from the user. Find the length of the string and
print.*/

#include<stdio.h>
#include<string.h>
int main()
{
	char str[80];
	puts("Enter string:");
	scanf("%[^\n]str",str);
	int len=strlen(str);
	printf("The length of the string is %d\n",len);
}
