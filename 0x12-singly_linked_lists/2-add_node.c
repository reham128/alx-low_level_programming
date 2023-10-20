#include "lists.h"
/**
 * add_node - function to add new node at the beginning of a list_t list.
 * @head: starting point.
 * @str: the string wantes to be store in the list.
 * Return: address of new node, or NULL if it failed to added.
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int a;
	int charNum = 0;
	list_t *ptrNew;

	ptrNew = malloc(sizeof(list_t));
	if (ptrNew == NULL)
	{
		free(ptrNew);
		return (NULL);
	}
	else if (str != NULL)
	{
		ptrNew->str = strdup(str);
	}
	for (a = 0; str[a] != '\0'; a++)
	{
		charNum = charNum + 1;
	}
	ptrNew->len = charNum;
	ptrNew->next = *head;
	*head = ptrNew;
	return (ptrNew);
}
