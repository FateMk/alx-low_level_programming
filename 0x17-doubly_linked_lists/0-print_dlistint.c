# include "lists.h"
/**
 * print_dlistint - Print all the values of each node in a `dlistint_t` list
 * @h: head pointer in doubly linked list
 * Return: Number of nodes in LL
 */
size_t print_dlistint(const dlistint_t *h)
{
    size_t count;

    while (h && h->prev)
    {
        h = h->prev;
    }
    for (count = 0; h; count++, h = h->next)
    {
        printf("%d\n", h->n);
    }
    return (count);
}