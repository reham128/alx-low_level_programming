#include <stdio.h>
#include <ctype.h>
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
	int c, a;
	int add = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (c = 0; c < argc; c++)
		{
			 a = atoi(argv[c]);
			if (!(isdigit(argv[c][0])) || a < 0)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				add = add + a;
				printf("%d\n", add);
			}
		}
	}
	return (0);
}
