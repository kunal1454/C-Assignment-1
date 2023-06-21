/*7. Read a line and print the number of words present in the line string.
Note that one or more spaces could be present between the wokds.*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str[80];
	puts("Enter the string:");
	scanf("%[^\n]",str);
	int i,cnt=1;
	
	for(i=0;str[i];i++)
	{
		if(str[i]==' ' && str[i+1]==' ')
		memmove(str+i,str+i+1,strlen(str+i+1)+1);
	}	
	for(i=0;str[i];i++)
	{
		if(str[i]==32||str[i]=='\n')
			cnt++;
	}
	printf("The number of spaces letters present in string :%d\n",cnt);
}
