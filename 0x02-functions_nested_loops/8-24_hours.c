#include "main.h"

/**
 * jack_bauer - prints every min of the day of jack bauer
 * Return: void
 */
void jack_bauer(void)
{
	int h;
	int m;

	h = 0;
	while (h < 24)
	{
		m = 0;
		while (m < 60)
		{
			_putchar((i / 10) + 48);
			_putchar((i % 10) + 48);
			_putchar(58);
			_putchar((j / 10) + 48);
			_putchar((j % 10) + 48);
			_putchar('\n');
			m++
		}
		h++
	}
}
