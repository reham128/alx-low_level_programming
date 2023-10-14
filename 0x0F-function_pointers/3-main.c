#include "3-calc.h"
/**
 * main - simple calculator.
 *
 * @argc: number of arguments.
 *
 * @argv: array of arguments.
 *
 * Return 0 for success.
*/
int main(int argc, char *argv[])
{
	int x, y;
	char *op;
	int (*opFunc)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	x = atoi(argv[1]);
	op = (argv[2]);
	y = atoi(argv[3]);

	opFunc = get_op_func(argv[2]);
	if (opFunc == NULL || op[1] !='\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' && y == 0) || (*op == '%' && y == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", opFunc(x, y));
	return (0);
}
