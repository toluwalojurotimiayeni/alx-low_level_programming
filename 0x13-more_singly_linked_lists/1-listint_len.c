#include "lists.h"
#include <stdio.h>

/**
 * listint_len - A function that returns the number of elements in a
 * linked listint_t list
 * @h: This is the head
 * Return: The number of elements in a linked listint_t list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
