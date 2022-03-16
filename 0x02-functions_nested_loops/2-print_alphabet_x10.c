#include "main.h"
/**
 * print_alphabet_x10 - This function prints out the alphabet 10 times
 * Return: void
*/

void print_alphabet_x10(void)
{
  int i;
  char c;
  
  for (i = 0; i < 10; i++)
  {
    _putchar('\n');

    for (c = 'a'; c <= 'z'; c++)
    {
      _putchar(c);
    }
  }
}
