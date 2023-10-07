#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that adds positive numbers.
 *
 * @argc: count number of argument.
 *
 * @argv: array of strings which are those arguments.
 *
 * Return: 0 for success.*
 */
int main(int argc, char *argv[])
{
	int count, a;
	int add = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (count = 0; count < argc; count++)
		{
			a = atoi(argv[count]);

			if (isdigit(a))
			{
				add = add + a;
				printf("%d\n", add);
			}
			else
			{
			printf("Error\n");
			return (1);
			}
		}
	}
	return (0);
}
