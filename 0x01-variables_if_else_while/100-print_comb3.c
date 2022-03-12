#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (success)
*/

int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			if (i != j)
			{
				putchar(i);
				putchar(j);

				if (((i + j) < (57 + 56)))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}

	putchar(10);

	return 0;
}
