#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listint(listint_t *head)
{
	listint_t *tp;

	while ((tp = head) != NULL)
	{
		head = head->next;
		free(tp);
	}
}
