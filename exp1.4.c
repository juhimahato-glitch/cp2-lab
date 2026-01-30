/*How can you implement a program to count the number of vowels in a string?*/
#include<stdio.h>
#include<string.h>
int main()
{
	char temp[100];
	int c=0;
	int i;
	printf("enter a string:");
	scanf("%s",temp);
	for (i=0;temp[i]!=0;i++)
	if(temp[i]=='a'||temp[i]=='e'||temp[i]=='i'||temp[i]=='o'||temp[i]=='u'||temp[i]=='A'||temp[i]=='E'||temp[i]=='I'||temp[i]=='O'||temp[i]=='U')
	{
		c++;
	}
	printf("number of vowels:%d",c);
	return 0;
}
