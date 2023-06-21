/*10.Define a string of size 80 chars. Also define 5 strings of size 20 chars
each. Ask the user to enter a line containg 5 words. Copy each word
into individual strings. Finally print all the inidividual string.*/

#include<stdio.h>
#include<string.h>

int main()
{
	char str[80],str1[20],str2[20],str3[20],str4[20],str5[20];
	puts("Enter a line containg 5 words:");
	fgets(str,80,stdin);
	int i,j;	
	for(i=0;str[i];i++)
	{
		if(str[i]==' ')
		{
			i++;
			break;
		}
		str1[i]=str[i];
	}
	str1[i]='\0';

	for(j=0;str[i];i++,j++)
	{
		if(str[i]==' ')
		{
			i++;
			break;
		}
		str2[j]=str[i];
	}
	str2[j]='\0';

	for(j=0;str[i];i++,j++)
	{
		if(str[i]==' ')
		{
			i++;
			break;
		}
		str3[j]=str[i];
	}
	str3[j]='\0';

	for(j=0;str[i];i++,j++)
	{
		if(str[i]==' ')
		{
			i++;
			break;
		}
		str4[j]=str[i];
	}
	str4[j]='\0';
	
	for(j=0;str[i];i++,j++)
	{
		if(str[i]==' ')
		{
			i++;
			break;
		}
		str5[j]=str[i];
	}
	str5[j]='\0';

	puts(str1);
	puts(str2);
	puts(str3);
	puts(str4);
	puts(str5);
}


