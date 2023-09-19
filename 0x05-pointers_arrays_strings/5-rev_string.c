#include "main.h"

/**
 * rev_string - reverses a string
 * @s: char pointer
 * Return: void
 */
void rev_string(char *s)
{
	int i, k, t;

	i = 0;
	while (s[i] != '\0')
		i++;

	k = 0;
	i = i - 1;
	while (k < i)
	{
		t = s[k];
		s[k] = s[i];
		s[i] = t;
		k++;
		i--;
	}
}
