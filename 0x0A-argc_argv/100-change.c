#include <stdio.h>
#include <stdlib.h>
/**
 * main - print mini number of coins to make change for amount of money.
 *
 * @argc: count number of argument.
 *
 * @argv: array of strings which are those arguments.
 *
 * Return: 0 for success.*
 */
int main(int argc, char *argv[])
{
	int i;
	int coins = 0;
	int cents = atoi(argv[1]);
	int ar[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 0; i < 5; i++)
		{
			while (cents >= ar[i])
			{
				cents = cents - ar[i];
				coins++;
			}
		}
	}
	printf("%d\n", coins);
	return (0);
}
