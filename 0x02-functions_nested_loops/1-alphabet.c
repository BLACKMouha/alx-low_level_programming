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
	int i;

	for (i = 97; i <= 122; i++)
	{
		print_alphabet (i);
	}

	return (0);
}
