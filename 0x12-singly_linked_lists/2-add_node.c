#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * add_node - adds a node at the beginning of a list_t list
 * @head: const double pointer of structure list_t for start
 * @str: const cshr pointer for data to be added
 * Return: List with new node for list_t, NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	usigned int i;
	
	list_t *start = malloc(sizeof(list_t *));
	if (str = NULL)
	{
		start->len = 0;
		start->next = *head;
	}
	if (start == NULL)
		return (NULL);
	start->next = *head;
	*head = start;
	start->str = strdup(str);
	for (i = 0; str[i]; i++)
		;
	start->len = i;
	return (start);
}
