#include "lists.h"
#include <stdio.h>
/**
 * list_len - number of elements in a linked list_t list
 * @h: constant list_t
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
