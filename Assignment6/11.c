/*11. Define a pointer to structure of type struct Student. Look at the
assignment 7 above, for 'struct Student' type. Using malloc() function
allocate memory for this structure variable and store the address in the
pointer.
­ Read student information into this dynamically allocated structure
from the user
­ Print the content of dynamically allocated structure variable
Note:
This assignment is similar to assignment 7. There pointer is pointing
to the statically allocated structure variable. Statically allocated
variable is already existing and it will have its own name. And by
putting its address in pointer, we are making pointer to point to already
existing variable. So pointer is just using already existing variable.
In this way pointer is not very useful.
Now in this assignment, pointer is pointing to dynamically allocated
variable. This variable is allocated just now at run time. One can
access this dynamically allocated variable only through pointer.
Dynamically allocated variables do not have any name associated with
them. So these can be accessed only through the pointer variables.
This is the real use of pointer variables.*/

#include<stdio.h>
#include<stdlib.h>
struct Student
{
	char name[40];
	long long mobile;
	int yearOfBirth;
};
int main()
{
	struct Student *st;
	st=malloc(sizeof(struct Student));
	if(st==NULL)
	{
		printf("Memory not allocated\n");
		return 0;
	}

	printf("Enter the Details:\n");
	printf("------------------------------------------\n");
	printf("Enter Name:\n");
	scanf("%[^\n]s",st->name);
	printf("Enter Mobile:\n");
	scanf("%lld",&st->mobile);
	printf("Enter Year of Birth:\n");
	scanf("%d",&st->yearOfBirth);

	printf("------------------------------------------\n");
	
	printf("Name:%s\n",st->name);
	printf("Mobile:%lld\n",st->mobile);
	printf("Year of Birth:%d\n",st->yearOfBirth);

	free(st);
}

