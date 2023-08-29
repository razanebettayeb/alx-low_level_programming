#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end
 * of a linked list
 * @head: head of a list.
 * @n: n element.
 *
 * Return: address of the new element. NUll if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newl;
	listint_t *tp;

	(void)tp;

	newl = malloc(sizeof(listint_t));

	if (newl == NULL)
		return (NULL);

	newl->n = n;
	newl->next = NULL;
	tp = *head;
	if (*head == NULL)
	{
		*head = newl;
	}
	else
	{
		while (tp->next != NULL)
		{
			tp = tp->next;
		}
		tp->next = newl;
	}

	return (*head);
}
