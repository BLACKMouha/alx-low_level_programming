#include <stdio.h>

/**
 * main - Ehtry point
 * Return: Always 0 (success)
*/
 
int main()
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if ((i != 101) && (i != 113))
		{
			putchar(i);
		}
	}

	putchar(10);

	return 0;
}
