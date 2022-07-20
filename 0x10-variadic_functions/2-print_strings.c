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
	va_list strings;
	unsigned int i;
	char *string;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(strings, char *);
		if (string)
			printf("%s", string);
		else
			printf("(nil)");
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	va_end(strings);
	printf("\n");
}
