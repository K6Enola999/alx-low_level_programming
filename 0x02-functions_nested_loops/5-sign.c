#include "main.h"

/**
 * int print_sign(int n) - prints the sign of a number
 *
 * Return: 1 if greater than 0 and 0 if 0 and -1 if less then zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
