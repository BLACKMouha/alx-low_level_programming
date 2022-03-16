#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * print_alphabet - return void
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 * 
 * main - Entry point
 * Return : Always 0
 */
int _putchat(cha c);
void print_alphabet(void);

int _putchar(char c)
{
	return (write(1, &c, 1);
}

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}

	return;
}

