#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - A function that frees a listint_t list
 * @head: This is the head
 * Return: Always 0 (Success)
 */

void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
}
