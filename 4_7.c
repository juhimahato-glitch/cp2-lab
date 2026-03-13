/*Write a program to define a structure within another structure to store details of
an employee (name, ID, salary and department details). Store the details of 10
employees and sort them according to the salary.  */

#include<stdio.h>
struct depart
{
	char dept_name[20];
};
struct emp
{
	char name[20],dept[40];
	int id;
	float salary;
};
int main()
{
	struct emp e[10],temp;
	int i,j;
	for(i=0;i<10;i++)
	{
		printf("Enter Name, ID, Salary, Department: ");
		scanf("%s %d %f %s",e[i].name,&e[i].id,&e[i].salary,e[i].dept);
	}
	for(i=0;i<9;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(e[i].salary>e[j].salary)
			{
				temp=e[i];
				e[i]=e[j];
				e[j]=temp;
			}
		}
	}
	printf("\nSorted Employee Details:\n");
	for(i=0;i<10;i++)
	{
		printf("%s %d %.2f %s\n",e[i].name,e[i].id,e[i].salary,e[i].dept);
	}
	return 0;
}
