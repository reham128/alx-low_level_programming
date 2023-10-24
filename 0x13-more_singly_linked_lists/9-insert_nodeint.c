#include "lists.h"
/**
 * insert_nodeint_at_index - to insert new node at certian index.
 * @head: poniter to pointer of the 1st node.
 * @idx: the index to add the new node at the list.
 * @n: data to added to the new node.
 * Return: the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *ptr, *nNode;

	ptr = *head;
	if (head == NULL)
		return (NULL);
	nNode = malloc(sizeof(listint_t));
	if (nNode == NULL)
	{
		free(nNode);
		return (NULL);
	}
	nNode->next = NULL;
	nNode->n = n;
	if (idx == 0)
	{
		nNode->next = *head;
		*head = nNode;
		return (nNode);
	}
	else
	{
		for (a = 0; ptr != NULL; a++)
		{
			while (a == idx - 1)
			{
				nNode->next = ptr->next;
				ptr->next = nNode;
				return (nNode);
			}
			ptr = ptr->next;
		}
	}
	free(nNode);
	return (NULL);
}

