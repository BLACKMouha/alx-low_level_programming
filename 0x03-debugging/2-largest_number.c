#include <stdio.h>

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 * main - prints the largest of 3 integers
 * Return: 0
*/

int largest_number(int *a, int *b, int *c)
{
    int largest;

    if ((&a > &b) && (&b > &c))
    {
        largest = a;
    }
    else if ((&b > &a) && (&a > &c))
    {
        largest = b;
    }
    else if ((&c > &a) && (&a > &c))
    {
        largest = c;
    }

    return (largest);
}