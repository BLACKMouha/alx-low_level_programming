#include <stdio.h>

/**
 * main - print single digit numbers
 * Description: print single digit numbers
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}

	for (i = 65; i <= 90; i++)
	{
		putchar(i);
	}

	putchar(10);

	return (0);
}
