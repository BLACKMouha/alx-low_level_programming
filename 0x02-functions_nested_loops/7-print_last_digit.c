#include "main.h"

/**
 * print_last_digit - This functions prints the last digit of a number
 *
 * @i: is an integer
 *
 * Return : Return an integer representing the last digit of a number
*/

int print_last_digit(int i)
{
	int m; 

	m= i % 10;
	if (m < 0)
	{
		_putchar(-m + 48);
		return (-m);
	}
	else
	{
		_putchar(m + 48);
		return (m);
	}
}
