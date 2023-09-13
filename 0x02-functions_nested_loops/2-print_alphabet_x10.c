#include "main.h"

/**
 * print_alphabet_x10 - function will print 10 times small letters
 * Return: void
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	i = 0;
	while (i < 10)
	{
		c = 97;
		while (c < 123)
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
