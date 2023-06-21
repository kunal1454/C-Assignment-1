/*8. Read three integer numbers from the user. If these three numbers are
in asending order, print "Asending". If the numbers are in decending order
print "Decending". If all three numbers are equal print "Equal". If none
of the above are true, print "Random".*/

#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three integer number:\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b && b==c)
		printf("Equal\n");
	else if(a<b && b<c)
		printf("Asending\n");
	else if(a>b && b>c)
		printf("Decending\n");
	else
		printf("Random\n");
}
