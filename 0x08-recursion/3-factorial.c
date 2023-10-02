#include "main.h"

/**
 * factorial - prints the factorial of a number
 * @n: the input number
 * Return: if n < 0 return error, otherwise factorial value
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
