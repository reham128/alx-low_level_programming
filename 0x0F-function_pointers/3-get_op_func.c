#include "3-calc.h"
/**
 * get_op_func - to select the right operation.
 * @s: string of the operators.
 * Return: function pointer to the selected operation.
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
