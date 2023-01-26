#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - A function that returns the length of a string
 * @s : s is a character
 * Return: The value
 */

unsigned int _strlen(char *s)
{
	unsigned int x;

	for (x = 0; s[x]; x++)
		;
	return (x);
}

/**
 * add_node_end - A function that adds a new node at the end of
 * a list_t list
 * @head: This is the linked list
 * @str: This is the string to add to the new node
 * Return:The address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add, *node;

	if (str == NULL)
		return (NULL);
	add = malloc(sizeof(list_t));
	if (add == NULl)
		return (NULL);
	add->str = strdup(str);
	if (add->str == NULL)
	{
		free(add);
		return (NULL);
	}
	add->len = _strlen(add->str);
	add->next = NULL;
	if (*head == NULL)
	{
		*head = add;
		return (add);
	}
	node = *head;
	while (node->next)
		node = node->next;
	node->next = add;
	return (add);
}
