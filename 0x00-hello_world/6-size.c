#include <stdio.h>
/**
 * main-Entry point
 * Return:Always 0 (success)
 */
int maint(void)
{
	char c;
	int i;
	float f;
	long int li;
	long long int lli;
	
	printf("Size of char: %lu bytes\n",(unsigned long)sizeof(c));
	printf("Size of int : %lu bytes\n",(unsigned long)sizeof(i));
	printf("Size of long int %lu bytes\n",(unsigned long)sizeof(li));
	printf("Size of long long int %lu bytes\n",(unsigned long)sizeof(lli));
	printf("Size of float %lu bytes\n",(unsigned long)sizeof(f));

	return (0);
}
