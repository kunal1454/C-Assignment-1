/*8. Read a line from the user, and convert each capital letter to small letter
and small letter to capital. All the other characters should remain as
it is. Finally print the modified line string.*/

#include<stdio.h>
#include<string.h>
int main()
{
	char str[80];
	int i;
	puts("Enter string:");
	//fgets(str,80,stdin);
	scanf("%[^\n]",str);
	for(i=0;str[i];i++)
	{
		if((str[i]>=65 && str[i]<=90)||(str[i]>=97 && str[i]<=122))
			str[i]^=32;
	}
	puts(str);
}
