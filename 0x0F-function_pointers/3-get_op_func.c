#include "3-calc.h"
#include <stdio.h>
#include <stddef.h>

/**
 * get_op_func - selects the correct function to perform the operation
 * @s: type char pointer, operator passed as argument
 * Return: a pointer to the function that correspond to the op given
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op)
	{
		if (ops[i].op[0] == s[0] && s[1] == '\0')
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
