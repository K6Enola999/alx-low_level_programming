#include "main.h"

/**
 * int _isalpha(int c) - checks for alphabetic letters
 * Return: 1 if input is letter and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
