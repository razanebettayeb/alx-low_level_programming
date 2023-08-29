#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning
 * of a linked list
 * @head: head of a list.
 * @n: n element.
 *
 * Return: address of the new element. NUll if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newl;

	newl = malloc(sizeof(listint_t));

	if (newl == NULL)
		return (NULL);

	newl->n = n;
	newl->next = *head;
	*head = newl;

	return (*head);
}
