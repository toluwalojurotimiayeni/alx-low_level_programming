#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * list_len - A function that returns the number of elements
 * in a linked list_t list
 * @h: this is the name of the list
 * Return: The number of elements in a linked list_t list
 */

size_t list_len(const list_t *h)
{
	int list = 0;

	while (h)
	{
		list++;
		h = h->next;
	}

	return (list);
}
