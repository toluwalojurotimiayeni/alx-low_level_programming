#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - A function that frees a listint_t list
 * @head: This is th ehead
 * Return: Alwasy 0 (Success)
 */

void free_listint(listint_t *head)
{
	listint_t *fre;

	while (head != NULL)
	{
		fre = head->fre;
		free(head);
		head = fre;
	}
}
