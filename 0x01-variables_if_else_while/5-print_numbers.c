#include <stdio.h>

/**
 * main - this program will print all single digits
 * Return(0)
 */
int main (void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	printf("\n");
	return (0);
}
