#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: char pointer
 * Return: void
 */
void puts_half(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 != 0)
	{
		i++;
		i = i / 2;
	}
	else
		i = i / 2;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
