#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - A function that returns the length of a string
 * @s : s is a character
 * Return: The value
 */

int _strlen(const char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}

	return (x);
}

/**
 * add_node - A function that adds a new node at the beginning
 * of a list_t list
 * @head: This is the head of the list
 * @str: This is the value to insert
 * Return: The address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *add;

	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);
	add->str = strdup(str);

	add->len = _strlen(str);
	add->next = *head;
	*head = add;

	return (add);
}
