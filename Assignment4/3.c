/*3. Define a structure variable of type 'struct Student' as given below:
struct Student
{
char name[40];
long long mobile;
struct Date dob; //Date of birth, struct Date as given in assignment 2.
};
Ask the user to enter the student information, and fill the defined
structure variable. Finally print the studnent informaiton in the
following format:
Name
: Bharat Kumar B
Mobile : 9393916923
DOB
: 18/10/1994
Note that, name may have multiple words.*/

#include<stdio.h>
struct Student
{
	char name[40];
	long long mobile;
	struct Date {
		char date;
		char month;
		short year;
	}dob;
};
int main()
{
	struct Student st;
	printf("Enter the Student Name:\n");
	scanf("%[^\n]",st.name);
	printf("Enter Mobile number:\n");
	scanf("%lld",&st.mobile);
	printf("Enter the DOB date:\n");
	scanf("%hhd",&st.dob.date);
	printf("Enter the DOB month:\n");
	scanf("%hhd",&st.dob.month);
	printf("Enter the DOB year:\n");
	scanf("%hd",&st.dob.year);
	
	printf("NAME   : %s\n",st.name);
	printf("Mobile :%lld\n",st.mobile);
	printf("DOB    :%02d/%02d/%02d\n",st.dob.date,st.dob.month,st.dob.year);
}

