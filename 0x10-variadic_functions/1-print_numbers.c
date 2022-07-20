#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * Prototype: void print_numbers(const char *separator,
 * const unsigned int n, ...);
 * @separator: a string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: Nothing.
 *
 * If @separator is NULL, print_numbers() prints nothing
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, 0);

	if ( separator == NULL)
		printf("%d", va_arg(ap, int));
	else
	{
		for (i = 0; i < n; i++)
		{
			if (i < (n - 1))
				printf("%d%s", va_arg(ap, int), separator);
			else
				printf("%d", va_arg(ap, int));
		}
	}

	putchar('\n');

	va_end(ap);
}
