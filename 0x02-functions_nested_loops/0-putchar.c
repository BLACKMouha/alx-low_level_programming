#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 * 
 * main - Entry point
 * Return : Always 0 (success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

int main() {

    _putchar('_');
    _putchar('p');
    _putchar('u');
    _putchar('t');
    _putchar('c');
    _putchar('h');
    _putchar('a');
    _putchar('r');
    _putchar(10);
    return 0;
}
