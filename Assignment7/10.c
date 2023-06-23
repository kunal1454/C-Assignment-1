/*10. void printStudentInfo(struct Student *ps);
This function simply prints the student information present in the
given in structure.
Keep this function and prevous function in assignment 9 also in the
same file. In main() function define a structure variable of type
struct Student. Call the getStudentInfo() function to read the
student information from the user. Next call this function
printStudentInfo() to print the content of student structure.*/

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
void printStudentInfo(struct Student *ps)
{
	printf("Name :%s\n",ps->name);
	printf("Mobile :%lld\n",ps->mobile);
	printf("Date of birth: %hhd/%hhd/%hd\n",ps->dob.date,ps->dob.month,ps->dob.year);
}
int main()
{
	struct Student st;
	printf("Enter student details:\n");
	getStudentInfo(&st);
	printStudentInfo(&st);
}








