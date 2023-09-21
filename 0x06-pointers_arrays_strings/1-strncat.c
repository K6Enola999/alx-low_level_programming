#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: char pointer
 * @src: char pointer
 * @n: number of bytes to be appended
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j != n)
	{
		dest[i] = src[j];
		if (j == n)
			break;
		else if (src[j] == '\0')
			break;
		j++;
		i++;
	}
	return (dest);
}
