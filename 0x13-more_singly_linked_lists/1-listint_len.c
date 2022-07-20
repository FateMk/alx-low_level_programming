#include "lists.h"
/**
 * listint_len - returns the number of elemets in linked listint_t list
 * @h: const listint_t
 */
 size_t listint_len(const listint_t *h)
 {
    int i;
    
    while (h)
    {
        h = h->next;
        i++;
    }
    return (i);
 }
 
