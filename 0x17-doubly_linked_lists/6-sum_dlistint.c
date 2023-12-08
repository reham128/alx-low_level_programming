#include "lists.h"
/**
 * sum_dlistint - function to summition all data of dlist
 * @head: pointer to the head node of the list
 * Return: the result of data summition.
 */
int sum_dlistint(dlistint_t *head)
{
	int result = 0;

	while (head != NULL)
	{
		result = result + head->n;
		head = head->next;
	}
	return (result);
}
