#include "main.h"

/**
 * _strlen - calculate the length of a string
 * @s: char pointer
 * Return: the length
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
