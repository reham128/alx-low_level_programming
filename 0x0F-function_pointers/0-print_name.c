#include "function_pointers.h"
/**
 * print_name - function prints a name
 *
 * @name: the name wanted to be printed
 *
 * @f: is function pointer.
 *
 * Return: void function.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		(*f)(name);
}
