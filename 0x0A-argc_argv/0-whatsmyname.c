#include <stdio.h>
/**
 * main - a program that prints its name, followed by a new line.
 *
 * @argc: count number of argument.
 *
 * @argv: array of pointers to the strings which are those arguments.
 *
 * Return: 0 for success.*
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);

	return (0);
}
