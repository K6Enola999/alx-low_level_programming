#include "main.h"

/**
 * _atoi - change a string to an integer
 * @s: a char pointer
 * Return: the integer.
 */
int _atoi(char *s)
{
	int i, result, sign;

	result = i = 0;
	sign = 1;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign = sign * -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 - (s[i] - '0');
		}
		else if (result != 0 && s[i] == ' ')
			break;
		i++;
	}
	sign = sign * -1;
	return (result * sign);
}
