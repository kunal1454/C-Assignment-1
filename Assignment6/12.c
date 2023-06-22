/*12. Define a pointer to structure of type struct Student. Using malloc()
function allocate memory for 4 student structures. Store this address in
the poiner. Now pointer is pointing to an array of 4 student structures.
Now use this pointer, just like an array of 4 student structures.
­ Read 4 students information into this array of 4 structures from user.
­ Print the 4 students information entered by the user*/

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
	struct Student *p;
	p=(struct Student *)malloc(4*sizeof(struct Student));
	int i;
	printf("Enter the student details:\n");
	for(i=0;i<4;i++)
	{
		printf("Enter Name:\n");
		scanf(" %[^\n]s",p[i].name);
		printf("Enter Mobile:\n");
		scanf("%lld",&p[i].mobile);
		printf("Enter Year of Birth:\n");
		scanf("%d",&p[i].yearOfBirth);
	}
	printf("--------------------------------------------\n");
	for(i=0;i<4;i++)
	{
		printf("Name:%s\n",p[i].name);
		printf("Mobile:%lld\n",p[i].mobile);
		printf("Year of Birth:%d\n",p[i].yearOfBirth);
	}
	free(p);
}

