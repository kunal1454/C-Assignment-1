/*8. Read two small integers from the user in hex format. You should ask user
to enter only hexadecimal numbers with maximum two digits.
Perform all possible bit wise operations on these two numbers. Print the
results of all these bit wise operations.
Following are the possible bit wise operations:
AND(&)
OR(|)
Shift left(<<)
EX­OR(^)
Complement(~)
Shift right (>>)*/
#include<stdio.h>
int main()
{
	short int num1,num2,res;
	printf("Enter the two digit hex number:\n");
       	scanf("%hd%hd",&num1,&num2);
	res=num1&num2;
	printf("Bitwise AND :%hd & %hd =%hd\n",num1,num2,res);
	res=num1|num2;
	printf("Bitwise OR :%hd | %hd =%hd\n",num1,num2,res);
	res=num1<<num2;
	printf("Bitwise Shift left: %hd << %hd =%hd\n",num1,num2,res);
	res=num1>>num2;
	printf("Bitwise shift right: %hd >> %hd =%hd\n",num1,num2,res);
	res=num1^num2;
	printf("Bitwise EXOR: %hd ^ %hd =%hd\n",num1,num2,res);
	res=~num1;
	printf("Complement of %hd is %hd\n",num1,res);
	res=~num2;
	printf("Complement of %hd is %hd\n",num2,res);
}
