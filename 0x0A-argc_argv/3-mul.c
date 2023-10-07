#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that multiplies two numbers.
 *
 * @argc: count number of argument.
 *
 * @argv: array of strings which are those arguments.
 *
 * Return: 0 for success and 1 if fail.
 */
int main(int argc, char *argv[])
{
	int a, b;
	int result = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		result = a * b;
		printf("%d\n", result);
	}
	return (0);
}
