#include "lists.h"
/**
 * listint_len - returns the number of elemets in linked listint_t list
 * @h: const listint_t
 */
 size_t listint_len(const listint_t *h)
 {
    size_t i;
    
    while(h != NULL)
    {
        h = h->next;
        i++;
    }
    return (i);
 }
 