#include "main.h"

/**
 * jack_bauer - This function prints out the time from 00:00 t0 23:59
 *
 * Return: Void
*/

void  jack_bauer(void)
{
	int i, j, k, l;

	for (i = 48; i <= 50; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = 48; k <= 53; k++)
			{
				for(l = 48; l <= 57; l++)
				{
					if(i >= 50 && j>= 52)
					{
						break;
					}
					_putchar(i);
					_putchar(j);
					_puchar(58);
					_putchar(k);
					_putchar(l);
					_putchar(10);
				}
			}
		}
	}
}
