#include "main.h"
/**
 * _strstr - a function that locates a substring.
 *
 * @haystack: string array.
 *
 * @needle: second string array.
 *
 * Return: pointer to the beginning of the located substring
 *		or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;
	char *h = haystack;
	char *n = needle;

	for (i = 0; h[i] !='\0'; i++)
	{
		for (j = i; h[j] != '\0' && n[j - i] !='\0'; j++)
		{
			if (h[j] != n[j - i])
			{
				break;
			}
		}
		if (n[j - i] == '\0')
		{
			return (h + i);
		}
	}
	return ('\0');
}
