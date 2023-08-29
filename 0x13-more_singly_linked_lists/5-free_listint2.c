#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listint2(listint_t **head)
{
	listint_t *tp;
	listint_t *crr;

	if (head != NULL)
	{
		crr = *head;
		while ((tp = crr) != NULL)
		{
			crr = crr->next;
			free(tp);
		}
		*head = NULL;
	}
}
