/*6.Write the following function:
void strcpyLowerCase(char *dst, char *src);
This function copies the source string to the destination string. But while
copying, converts all the upper case letters to the lower case letters.
In the main() function define two strings. Read a line of text (not
just one word) from the user into first string. Call the above defined
function by passing both the strings. First string should be passed as
source string and second should be destination string. After returning
from the function, print both the first and second strings.*/

#include<stdio.h>
void strcpyLowerCase(char *dst, char *src)
{
	int i;
	for(i=0;src[i];i++)
	{
		if(src[i]>=65&&src[i]<=90)
			src[i]^=32;
		dst[i]=src[i];
	}
	dst[i]='\0';
}
int main()
{
	char src[80],dest[80];
	printf("Enter Source string:\n");
	scanf("%[^\n]s",src);
	strcpyLowerCase(dest,src);
	printf("After copying string:\n");
	printf("Source string:\n%s\n",src);
	printf("Destination string:\n%s\n",dest);
}

