/*9.
void getStudentInfo(struct Student *ps);
struct Date
{
char date;
char month;
short year;
};
struct Student
{
char name[40];
long long mobile;
struct Date dob; //Date of birth, struct Date as given in assignment 2.
};
This function asks the user to enter Student information. Reads the
informatino and fills the structure, by using the structure pointer
received as parameter.
In the main() function, define a structure variable of type struct Student.
Call the above function by passing the address of structure variable.
After returning from the function, print the content of structure variable.*/

#include<stdio.h>

struct Date
{
char date;
char month;
short year;
};
struct Student
{
char name[40];
long long mobile;
struct Date dob; //Date of birth, struct Date as given in assignment 2.
};
void getStudentInfo(struct Student *ps)
{
	printf("Enter Name:\n");
	scanf("%[^\n]s",ps->name);
	printf("Enter Mobile:\n");
	scanf("%lld",&ps->mobile);
	printf("Enter Date of birth:\n");
	scanf("%hhd%hhd%hd",&ps->dob.date,&ps->dob.month,&ps->dob.year);

}
int main()
{
	struct Student st;
	printf("Enter student details:\n");
	getStudentInfo(&st);
	printf("Name :%s\n",st.name);
	printf("Mobile :%lld\n",st.mobile);
	printf("Date of birth: %hhd/%hhd/%hd\n",st.dob.date,st.dob.month,st.dob.year);
}








