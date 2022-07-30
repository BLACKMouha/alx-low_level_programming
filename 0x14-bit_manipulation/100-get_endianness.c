#include "main.h"

/**
 * get_endianness - checks the endianness of a system or a processor
 * Prototype: int get_indianness(void);
 * Return: 0 if it is a BIG_ENDIAN, or 1 if it is LITTLE_ENDIAN
 */
int get_endianness(void)
{
	int i = 1;
	char *ptr = (char *) &i;

	if (ptr[0] == 1)
		return (1);
	else
		return (0);
}
