#include "main.h"

/**
 * print_alphabet - Prints alphabet in lowercase
 *
 * Return: void
*/


void alphabet_print(void)
{
	char character;

	for (character = 'a'; character <= 'z'; character++)
	{
		_putchar(character);
	}

	_putchar('\n');

	return;
}
