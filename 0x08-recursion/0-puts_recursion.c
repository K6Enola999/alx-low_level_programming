@include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: char pointer
 * Return: void
 */
void _puts_recusion(char *s)
{
	int i;

	i = 0;
	if (s[i] == '\0')
		return;
	_putchar (s[i]);
	s++;
	_puts_recursion(s);
}
