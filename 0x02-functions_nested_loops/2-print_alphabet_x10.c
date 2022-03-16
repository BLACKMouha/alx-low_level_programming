#include "main.h"

void print_alphabet_10x(void)
{
  int i;
  char c;
  
  for (i = 0; i <= 10; i++)
  {
    putchar('\n');
    for (c = 'a'; c <= 'z'; c++)
    {
      putchar(c);
    }
  }
}
