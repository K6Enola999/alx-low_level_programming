#include "main.h"

/**
 * _pow_recursion - prints value of x raised to power of y
 * @x: intput value
 * @y: input value
 * Return: if y lower than 0, return error, else return value of x power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, (y - 1)));
}
