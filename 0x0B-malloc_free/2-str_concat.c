#include "main.h"
/**
 * str_concat - a function that concatenates two strings
 *
 * @s1: first string array.
 *
 * @s2: second string array.
 *
 * Return: pointer tor new concatenates array if succes, and NULL if fail.
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int i, j;

	if (s1 == NULL)
	{
		s1 = NULL;
	}
	if (s2 == NULL)
	{
		s2 = NULL;
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		len1 = len1 + 1;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		len2 = len2 + 1;
	}
	ptr = malloc((1 + len1 + len2) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		ptr[len1 + j] = s2[j];
	}
	return (ptr);
}
