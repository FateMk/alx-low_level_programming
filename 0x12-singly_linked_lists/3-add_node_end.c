#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * add_node_end - adds a new node at the end of list_t list
 * @head: Const double pointer of structure list_t for start
 * @str: pointer to constant number of characters
 * Return
 */
list_t *add_node_end(list_t **head, const char *str)
{
    unsigned int i;
	list_t *last;
    const list_t new_last;

	new_last = malloc(sizeof(list_t *));
    if(str == NULL)
    {
        return (NULL);
    }
    if (new_last == NULL)
    return (NULL);
    for (i = 0; str[i]; i++)
    ;
	if (*head == NULL)
	{
		*head = new_last;
        new_last->len = i;
        new_last->str = strdup(str);
        new_last->next = NULL;
		return (new_last);
	}
	while (last->next != NULL)
		last = last->next;
        last->next = new_last;
        new_last->len = i;
        new_last->str = strdup(str);
        new_last->next = NULL;
        return (new_last);
}


