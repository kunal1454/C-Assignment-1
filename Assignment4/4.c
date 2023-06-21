/*4. Define an array of 5 structure variables of type 'struct Student'
Read from the user, information of 5 students in to this array.
Finally print the array in the following format:
S.No     Name           Mobile          Date of Birth
-----------------------------------------------------­­­­
1­­­  Bharat Kumar B    9393916923­      18/10/1994
--- ----------------   -------------    -------------
5   xxxxx xxxxxxx x    xxxxxxxxxxx      xx/xx/xxxx*/

#include<stdio.h>
struct Student
{
	int Srno;
	char name[40];
	long long mobile;
	char dob[11];
};
int main()
{
	struct Student st[5];
	int i;
	for(i=0;i<5;i++)
	{
		printf("Enter details:\n");
		printf("Enter Sr.No:\n");
		scanf("%d",&st[i].Srno);
		printf("Enter the Student Name:\n");
		scanf(" %[^\n]s",st[i].name);
		printf("Enter Mobile number:\n");
		scanf("%lld",&st[i].mobile);
		printf("Enter the DOB DD/MM/YYYY:\n");
		scanf("%s",st[i].dob);
	}
	printf("S.No	Name		Mobile		Date of Birth\n");
	printf("--------------------------------------------------------\n");
	for(i=0;i<5;i++)
	{
		printf("%d	%s		 %lld		  %s\n",st[i].Srno,st[i].name,st[i].mobile,st[i].dob);
	}
}

