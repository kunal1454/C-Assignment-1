/*5. Read a character from the user. If character is capital letter, convert
it to small letter and print it. If character is small letter, convert it
to capital letter. If character is nither capital nor small letter, print
as it is.*/

#include<stdio.h>
int main()
{
	char ch;
	printf("Enter character:\n");
	scanf("%c",&ch);
	if(ch>=65 && ch<=90)
	{
		ch^=32;
		printf("after convert Capital to small letter %c\n",ch); 
	}
	else if(ch>=97 && ch<=122)
	{
		ch^=32;
		printf("after convert Small to Capital letter %c\n",ch); 
	}
	else
		printf("%c\n",ch);
}
