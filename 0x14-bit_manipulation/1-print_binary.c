#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * Prototype: void print_binary(unsigned long int n);
 * @n: an integer to be convert in binary
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int i = 1;

	if (n == 0)
		_putchar('0');

	while (i <= n)
		i <<= 1;

	for (i >>= 1; i > 0; i >>= 1)
	{
		if ((num & i) == i)
			_putchar('1');
		else
			_putchar('0');
	}
}
































































