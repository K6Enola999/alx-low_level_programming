#include <stdio.h>

/**
 * main - prints all numbers of base 16
 * Return:(0)
 */
int main(void)
{
	int n;
	charc;

	n = 48;
	c = 97;
	while (n < 58)
	{
		putchar((int)n);
		n++;
	}
	while (c < 103)
	{
		putchar((char)c);
		c++;
	}
	putchar('\n');
	return (0);
}
