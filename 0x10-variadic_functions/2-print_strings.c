#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * Prototype: void print_strings(const char *separator, const unsinged
 * int n, ...);
 * @separator: string to be printed between the strings
 * @n: the number of strings passed to the function
 * Return: Nothing
 * If @separator == NULL, print_strings() does not print
 * If one the string is NULL, print_strings prints (nil) instead
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;

	va_start(ap, n);

	if (separator == NULL)
		printf("%s", va_arg(ap, char *));
	else
	{
		for (i = 0;  i < n; i ++)
		{
			if (i < (n - 1))
				printf("%s%s", va_arg(ap, char *), separator);
			else
				printf("%s", va_arg(ap, char *));
		}
	}

	printf("\n");
}
