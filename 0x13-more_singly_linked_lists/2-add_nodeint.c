#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - A function that adds a new node at the beginning
 * of a listint_t list
 * @head: This is the head
 * @n: This is an integer
 * Return: The address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add;

	if (head == NULL)
		return (NULL);
	add = malloc(sizeof(listint_t));
	if (add == NULL)
		return (NULL);
	add->n = n;
	add->next = *head;
	*head = add;
	return (add);
}
