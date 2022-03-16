#ifndef MAIN_H
#define MAIN_H
int _putchar (char c);
void print_alphabet (void);
#endif

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

void print_alphabet (void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar (i);
	}
}
