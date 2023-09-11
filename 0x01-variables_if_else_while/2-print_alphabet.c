#include <stdio.h>

/**
 * main - this program will prints the alphabet.
 * Return:(0)
 */
int main(void)
{
	char c;

	c = 97;
	while (c < 123)
	{
		putchar((char)c);
		c++;
		putchar('\n');
	}
	return (0);
}
