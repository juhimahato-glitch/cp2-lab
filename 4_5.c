/*How can you initialize an array of structures? Show an example.*/
#include<stdio.h>
struct student
{
	int roll;
	char name[20];
};
int main()
{
	struct student s[2]={{1,"Rahul"},{2,"Rani"}};
	printf("rollno:%d Name:%s\n",s[0].roll,s[0].name);
	printf("rollno:%d Name:%s\n",s[1].roll,s[1].name);
	return 0;
}
