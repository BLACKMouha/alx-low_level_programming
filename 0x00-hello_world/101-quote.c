#include <stdio.h>

/**
* main - this is the main function
*
* Return: 0 if the function runs without an error
*/
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(str, 50, 1, stderr);
	return (1);
}
