#include "main.h"
/**
 * string_nconcat - a function that concatenates n bytes from s2 to s1.
 *
 * @s1: first string array.
 *
 * @s2: second string array.
 *
 * @n: number of bytes to be concatenates.
 *
 * Return: pointer to new concatenates array if succes, and NULL if fail.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *nPtr;
	unsigned int lenS1 = 0;
	unsigned int lenS2 = 0;
	unsigned int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		lenS1 = lenS1 + 1;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		lenS2 = lenS2 + 1;
	}
	nPtr = malloc((1 + lenS1 + n) * sizeof(char));
	if (nPtr == NULL)
	{
		return (NULL);
	}
	if (n <= lenS2)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			nPtr[i] = s1[i];
		}
		for (j = 0; j < n; j++)
		{
			nPtr[j + lenS1] = s2[j];
		}
		nPtr[j + lenS1] = '\0';
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			nPtr[i] = s1[i];
		}
		for (j = 0; s2[j] != '\0'; j++)
		{
			nPtr[j + lenS1] = s2[j];
		}
		nPtr[j + lenS1] = '\0';
	}
	return (nPtr);
}
