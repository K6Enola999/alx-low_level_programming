#include <stdio.h>

/**
 * main - this program will prints the size of various types
 *
 * Return: (0)
 */
int main(void)
{
	int x;
	char v;
	long int k;
	long long int e;
	float z;
	printf("Size of a char: %d byte(s)\n", sizeof(v));
	printf("Size of an int: %d byte(s)\n", sizeof(x));
	printf("Size of a long int: %d byte(s)\n", sizeof(k));
	printf("Size of a long long int: %d byte(s)\n", sizeof(e));
	printf("Size of a float: %d byte(s)\n", sizeof(z));
	return (0);
}
