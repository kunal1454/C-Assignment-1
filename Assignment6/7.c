/*7.
Define a structure variable of type 'struct Student', and structure pointer
variable. Store the address of structure variable into the pointer variable.
struct Student
{
char
name[40];
long long mobile;
int
yearOfBirth; // Year in which one has born
};
­ Using scanf() function read into the structure variable
­ Print the content of the structure variable, using pointer variable
­ Using scanf() function read into the structure, through pointer variable
­ Print the content of structure variable using structure variable itself*/

#include<stdio.h>
struct Student
{
	char name[40];
	long long mobile;
	int yearOfBirth;
};
int main()
{
	struct Student st;
	struct Student *p;
	p=&st;
	printf("Enter student name:\n");
	scanf("%s",st.name);
	printf("Enter Mobile number:\n");
	scanf("%lld",&st.mobile);
	printf("Enter Year of Birth:\n");
	scanf("%d",&st.yearOfBirth);
	printf("The content of the structure variable, using pointer variable:\n");
	printf("Name:%s\n",p->name);
	printf("Mobile:%lld\n",p->mobile);
	printf("Year of Birth: %d\n",p->yearOfBirth);


	printf("Enter student name:\n");
	scanf("%s",p->name);
	printf("Enter Mobile number:\n");
	scanf("%lld",&p->mobile);
	printf("Enter Year of Birth:\n");
	scanf("%d",&p->yearOfBirth);
	printf("The content of the structure variable, using structure variable:\n");
	printf("Name:%s\n",st.name);
	printf("Mobile:%lld\n",st.mobile);
	printf("Year of Birth: %d\n",st.yearOfBirth);
}
