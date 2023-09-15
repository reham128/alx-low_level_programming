#include "main.h"

/**
 * fizz_buzz - prints the numbers from 1 to 100, followed by a new line.
 *             for multiples of three print Fizz
 *             for the multiples of five print Buzz
 *             for numbers multiples of three and five print FizzBuzz.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");

	return (0);
}
