#include <stdio.h>
int main(int argc, char *argv[]) 
{
printf("Total arguments: %d\n",argc);
printf("Arguments passed: %d\n",argc - 1);
if (argc > 1)
{
printf("\nList of arguments:\n");
int i;
for (i = 0; i < argc; i++) 
{
printf("argv[%d] = %s\n", i, argv[i]);
}
} 
else {
printf("\nNo arguments were passed.\n");
}
return 0;
}
