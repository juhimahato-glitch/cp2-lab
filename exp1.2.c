/*Create a program to input a string and display each character on a new line. */
#include<stdio.h>
void display(char s[])
{
	int i;
	for (i=0;s[i]!=0;i++)
	{
		printf("%c\n",s[i]);
	}

}
main()
{
	display("print the statment");
}
