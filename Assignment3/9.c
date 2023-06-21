/*9. Define two strings, each of size 80 chars. Read a line string into
first string. Copy this first string into the second one. Print the
second string.*/

#include<stdio.h>
#include<string.h>
int main()
{
	char str1[80],str2[80];
	puts("Enter string 1:");
	fgets(str1,80,stdin);
	strcpy(str2,str1);
	puts("After copy string");
	puts(str2);
}
