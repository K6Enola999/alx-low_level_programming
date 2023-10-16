#include "main.h"

/**
 * main - write a program that prints _putchar.
 * Return:(0)
 */
int main(void)
{
	char c[] = "_putchar\n";
	int i;

	i = 0;
	while (c[i] != '\0')
	{
		_putchar(c[i]);
		i++;
	}
	return (0);
}
