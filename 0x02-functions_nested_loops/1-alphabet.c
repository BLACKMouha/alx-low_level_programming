#include "main.h"

int _puchart (char c);
void print_alphabet (void);

/**
 * main - Entry point
 *
 * Return: Always 0
*/

int main (void)
{
	print_alphabet ();

	return (0);
}

void print_alphabt (void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}

	return;
}
