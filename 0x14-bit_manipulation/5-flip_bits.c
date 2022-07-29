#include "main.h"

/**
 * flip_bits - computes the number of bits to be flipped to get from
 * one number to another.
 *
 * Prototype:
 * unsigned int flip_bits(unsigned long int n, unsigned long int m);
 * @n: unsigned integer
 * @m: unsigned integer
 *
 * Return: the number of bits to be flipped to get from one number to
 * another.
 */
unsigned int flip_bits(unsigned long int n, unsigned int long m)
{
	unsigned int flip;

	unsigned int long xor;

	xor = n ^ m;
	flip = 0;
	while (xor > 0)
	{
		xor &= (xor - 1);
		flip++;
	}
	return (flip);
}
