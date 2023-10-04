#include "main.h"
/**
 * _strdup - function that make a copy of specific array.
 *
 * @str: array needed to be duplicated.
 *
 * Return: pointer to the new arry if success.NULL if fail.
 */
char *_strdup(char *str)
{
	char *dup;
	int len = 0;
	int i;

	for (i = 0; str[i] == '\0'; i++)
	{
		len = len + 1;
	}
	dup = malloc(len * sizeof(char));

	if (str == NULL || dup == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		dup[i] = str[i];
	}
	return (dup);
}
