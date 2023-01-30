#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - A function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n)
 * @head: This is the head
 * Return: 0, if the linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *start;
	int x;

	if (head == NULL || *head == NULL)
		return (0);
	start = *head;
	*head = start->next;
	x = start->x;
	free(start);
	return (x);
}
