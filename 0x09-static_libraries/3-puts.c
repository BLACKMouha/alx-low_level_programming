#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
* _puts - print a string followed by a new line
*@str: string to print
*Return: Nothing
*/
void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i) != 0; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
