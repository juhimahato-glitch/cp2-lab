/*Write a program to create a pointer to an integer variable and demonstrate how
the pointer can modify the value of the variable. */
#include <stdio.h>

int main()
{
    int num = 10;
    printf("Original value of 'number': %d\n", num);
    int *ptr;
    ptr = &num;
    *ptr = 25;
    printf("New value: %d\n", num);
    printf("Value: %d\n", *ptr);
	return 0;
}
