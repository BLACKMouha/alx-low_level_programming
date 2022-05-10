#include "main.h"

int _pow(int base, int power)
{
	int long i, result;

	result = 1;

	if (power == 0)
		result = 1;
	else
	{
		for (i = 0; i < power; i++)
		{
			result *= base;
		}
	}

	return (result);
}
