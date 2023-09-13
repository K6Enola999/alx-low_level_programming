#include "main.h"

/**
 * print_alphabet - this function will prints the alphabet.
 * Return: void
 */
void print_alphabet(void)
{
	char c;

	c = 97;
	while (c < 123)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
