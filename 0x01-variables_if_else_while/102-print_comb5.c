#include <stdio.h>

/**
 *main - Entry point
 * Return: Always 0 (success)
*/

int main(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = 48; k <= 57; k++)
			{
				for (l = 48; l <= 57; l++)
				{
					if ((i < k) || (((i + j) < (k + l)) && i <= k))
					{
						putchar(i);
						putchar(j);
						putchar(32);
						putchar(k);
						putchar(l);

						if(((i + j + k + l) == (57 + 56 + 57 + 57)) && i == 57)
						{
							break;
						}
						else
						{
							putchar(44);
							putchar(32);
						}
					}
				}
			}
		}
	}

	putchar(10);

	return 0;
}
