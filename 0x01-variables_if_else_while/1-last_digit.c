#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Discription: Positive anything is better than negative nothing.
 *
 * Return: 0 (success)
*/
int main(void)
{
	int n;
	int last_Dig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_Dig = n % 10;
	if (last_Dig > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last_Dig);
	else if (last_Dig == 0)
		printf("Last digit of %d is %d and is 0\n", n, last_Dig);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_Dig);
	return (0);
}
