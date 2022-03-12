#include <stdio.h>

/**
 *main- Entry point
 *Return: Always 0 (success)
*/

int main(void)
{
	char c;
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}

	for (c = 'a'; c <= 'a' + 5; c++)
	{
		putchar(c);
	}

	putchar(10);

	return (0);
}
