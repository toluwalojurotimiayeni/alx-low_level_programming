#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - A function that adds a new node at the end of
 * a listint_t list
 * @head: This is the head
 * @n: This is an int
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *end;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	end = *head;
	while (end->next != NULL)
	{
		end = end->next;
	}
	end->next = new;
	return (new);
}
