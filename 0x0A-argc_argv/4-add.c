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
	int c, b, a;
	int add = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (c = 0; c < argc; c++)
		{
			for (b = 0; argv[c][b] != '\0'; b++)
			{
				if (!(isdigit(argv[c][b])))
				{
					printf("Error\n");
					return (1);
				}
				a = atoi(argv[c]);
				add = add + a;
			}
		}
		printf("%d\n", add);
	}
	return (0);
}
