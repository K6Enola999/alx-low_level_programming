#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100
 * for multiples of three print Fizz 
 * for multiples of five print Buzz
 * for multiples of both print FizzBuzz
 * Return: (0)
 */
int main(void)
{
	int n;

	n = 1;
	while (n <= 100)
	{
		if (n % 3 == 0 && n % 5 == 0)
			printf("FizzBuzz");
		else if (n % 5 == 0)
			printf("buzz");
		else if (n % 3 == 0)
			printf("Fizz");
		else
			printf("%d", n);
		if (n != 100)
			printf(" ");
		n++;
	}
	printf('\n');
	return (0);
}
