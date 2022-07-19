#include "main.h"

/**
 * _abs - computes the absolute value of a given integer
 * Prototype: unsigned int _abs(int n);
 * @n: integer
 * Return an integer representing its absolute value
 */
unsigned int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}



/**
 * main - multiplies two positive numbers
 * Prototye: int main(int ac, char **av);
 * @ac: length of @av
 * @av: array of strings
 * Return: EXIT_SUCCESS in success
 * Usage: mul num1 num2
 */

int _isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (-1);
}

int main(int ac, char **av)
{
	unsigned long int num1, num2;
	int i = 0; j = 0;
	if (ac < 3 || ac > 3)
	{
		printf("Usage: mul num1 num2\n");
		exit(98);
	}

	while (av[1][i] != '\0')
	{
		if (_isdigit(av[1][i] == -1)
		{
			printf("Error\n");
			exit(98);
		}
		i++
	}
	i = 0;
	while (av[2][i] != '\0')
	{
		if (_isdigit(av[2][i] == -1)
		{
			printf("Error\n");
			exit(98);
		}
		i++
	}

	num1 = atoi(_abs(av[1]));
	num2 = atoi(_abs(av[2]));


}





























































