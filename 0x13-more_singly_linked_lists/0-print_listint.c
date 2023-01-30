#include "lists.h"
#include <stdio.h>

/**
 * print_listint - A function that prints all the elements of a listint_t list
 * @h: This is the head of the listint node
 * Return: The number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
