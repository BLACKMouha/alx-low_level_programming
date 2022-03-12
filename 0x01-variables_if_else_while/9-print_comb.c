#include <stdio.h>

int main(void)
{
	for (int i = 48; i <= 57; i++)
	{
		putchar(i);
		putchar(44);
		putchar(32);
	}

	putchar(10);

	return 0;
}
