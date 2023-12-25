#include <stdio.h>
/**
 * add - function to add toe input integr nums
 * @a: first input
 * @b: 2nd input
 * Return: result of addition
 */
int add(int a, int b)
{
	return (a + b);
}
/**
 * sub - function to subtract two input integr nums
 * @a: first input
 * @b: 2nd input
 * Return: result of subtract
 */
int sub(int a, int b)
{
	return (a - b);
}
/**
 * mul - function to multiply two input integr nums
 * @a: first input
 * @b: 2nd input
 * Return: result of multiply
 */
int mul(int a, int b)
{
	return (a * b);
}
/**
 * div - function to divid two input integr nums
 * @a: first input
 * @b: 2nd input
 * Return: result of division
 */
int div(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Division by zero\n");
		return (0);
	}
	return (a / b);
}
/**
 * mod - function to find module of two input integr nums
 * @a: first input
 * @b: 2nd input
 * Return: result of mod
 */
int mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Division by zero\n");
		return (0);
	}
	return (a % b);
}
