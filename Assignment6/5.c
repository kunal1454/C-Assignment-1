/*5.
Define one integer variable and one pointer to integer variable.
Store the address of integer variable into pointer variable.
­ Assign a value of 100 to integer variable.
­ Print the content of integer variable, using pointer variable.
­ Assign a new value (ex: 200) into integer variable by using pointer.
­ Print the new value in integer, using integer variable.
­ Read a new value into integer from user, using scanf() function
­ Print the new value in integer using pointer variable.
­ Read a new value into integer, through pointer variable using scanf()
function
­ Print the new value in integer using integer variable*/

#include<stdio.h>
int main()
{
	int num,*p=NULL;
	p=&num;
	*p=100;
	printf("The content of integer varible using pointer varible:%d\n",*p);
	*p=200;
	printf("The new value in integer, using integer variable:%d\n",num);
	printf("Enew value into integer from user:\n");
	scanf("%d",&num);
	printf("The new value in integer using pointer variable:%d\n",*p);
	printf("Enter new value into integer, through pointer variable :\n");
	scanf("%d",p);
	printf("The new value in integer using integer variable:%d\n",num);
}

