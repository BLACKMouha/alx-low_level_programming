#include <stdio.h>

void before_main(void) __attribute__((constructor));
/**
 * before_main - function executed before and prints a text
 * Prototype: void before_main(void) __attribute__((constructor));
 * Explanations:
 *	When we want a function to be executed before the main function, we
 * 	have to precise the "constructor" attribute.
 *	Note: It's possible to see a function executed after the main. In
 *	this case we use the "destructor" attribute.
 *
 * Return: Nothing
 */
void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
