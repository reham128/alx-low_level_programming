#include "lists.h"
/**
 * sum_listint - function to calculate the summition of all list data.
 * @head: a pointer to the 1st node of the list.
 * Return: the result of the summetion.
 */
int sum_listint(listint_t *head)
{
	unsigned int result = 0;

	if (!head)
	{
		return (0);
	}
	else
	{
		while (head != NULL)
		{
			result = result + (head->n);
			head = head->next;
		}
	}
	return (result);
}
