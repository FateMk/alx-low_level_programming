# include "lists.h"
/**
 * dlistint_len - Find the number of nodes in a doubly linked list
 * @h: head pointer to LL
 * Return: number of nodes in LL
 */
size_t dlistint_len(const dlistint_t *h)
{
    size_t count;

    while (h && h->prev)
    {
        h = h->prev;
    }
    for (count = 0; h; count++, h = h->next)
        ;
    return (count)
}
