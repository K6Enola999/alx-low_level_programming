#include <stdio.h>

/**
 * main - this program will prints alphabet
 * Return:(0)
 */
int main(void)
{
	char c;

	c = 97;
	while (c < 123)
	{
		putchar((char)c), c++;
	}
	c = c / 2 + 4;
	while (c < 91)
	{
		putchar((char)c), c++;
	}
	putchar('\n');
	return (0);
}
