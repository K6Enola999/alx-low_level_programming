#include <stdio.h>

/**
 * main - print alphabet in reverse order
 * Return:(0)
 */
int main(void)
{
	char c;

	c = 122;
	while (c > 96)
	{
		putchar((char)c);
		c--;
	}
	putchar('\n');
	return (0);
}
