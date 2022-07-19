#include "function_pointers.h"

/**
 * print_name - prints a name
 * Prototype: void print_name(char *name, void (*f)(char *));
 * @name: name to be printed
 * @f: pointer to a function taking as parameter a string and return
 * nothing
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *str))
{
	f(name);
}
