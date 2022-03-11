#include <stdio.h>

/**
 * main - print single digit numbers
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i;

	for (i = 97; i < (97 + 26); i++)
	{
		putchar(i);
	}

	putchar(10);

	return (0);
}
