#include <stdio.h>

/**
 * main - this program will print small letters except for q and e.
 * Return:(0)
 */
int main(void)
{
	char c;

	c = 97;
	while (c < 123)
	{
		if (c != 101 && c != 113)
		{
			putchar((char)c);
		}
		c++
	}
	putchar('\n');
	return (0);
}
