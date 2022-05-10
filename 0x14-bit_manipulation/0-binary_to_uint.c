#include <string.h>
#include "main.h"

unsigned int binary_to_uint(const char *b)
{
	int i, len_b, j;
	unsigned int sum;

	len_b = strlen(b);
	sum = 0;

	if (*b == '\0')
		sum = 0;
	else
	{
		for (i = 0, j = len_b ; i < len_b && j >= 0; i++, j--)
		{
			if (b[i] >= '0' && b[i] <= '1')
			{
				if(b[i] == '1')
					sum += ( _pow(2, j) ) / 2;
			}

			else
				return(0);
		}
	}

	return (sum);
}
