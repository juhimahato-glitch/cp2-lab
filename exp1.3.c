/*Write a program to reverse a given string and display it.*/
#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char temp[100];
	printf("enter a string:");
	scanf("%s",temp);
	strrev(temp); 
	printf("reverse of the statment: %s",temp);
	return 0;
}

