#include <stdio.h>

/**
 * main - prints all single line digits
 * Return:(0)
 */
int main(void)
{
	int n;

	n = 48;
	while (n < 58)
	{
		putchar((char)n);
		n++;
	}
	putchar('\n');
	return (0);
}
