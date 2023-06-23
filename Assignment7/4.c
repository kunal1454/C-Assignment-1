/*4.Write the following function:
int getCountofCapitalLetters(char *str);
This function takes the char pointer (i.e. address array/string).
This function should find the number of capital letters present in the
string and return that count. Observe that here, function is not
getting the length of the array/string. Why ?
In the main() function ask the user to enter a line of text containing
multiple words, with both lower case and upper case letters. Read the line
from the user. Call the above function by passing the line of text, that
is string. Print the count of capitals returned by the function.*/

#include<stdio.h>
int getCountofCapitalLetters(char *str)
{
	int count=0,i;
	for(i=0;str[i];i++)
	{
		if(str[i]>=65&&str[i]<=90)
			count++;
	}
	return count;
}
int main()
{
	char  str[80],*p;
	p=str;
	printf("Enter the string:\n");
	scanf("%[^\n]s",str);
	printf("In string No. of Capital :%d\n",getCountofCapitalLetters(p));
}
