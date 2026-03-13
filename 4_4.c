/*Can a union contain a bit-field? Demonstrate with an example.*/
#include<stdio.h>
union data
{
	struct
	{
		unsigned int a:3;
		unsigned int b:5;
	}bits;
	unsigned int values;
};
int main()
{
	union data d;
	d.bits.a=5;
	d.bits.b=17;
	printf("values:\n");
	printf("a=%u\n",d.bits.a);
	printf("b=%u\n",d.bits.b);
	printf("combine values= %u\n",d.values);
	return 0;
}
