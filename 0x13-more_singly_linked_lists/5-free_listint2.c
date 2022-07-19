#include "lists.h"
/**
 * 
 * 
 */
void free_listint2(listint_t **head)
{
    listint_t *victim;

    if (head == NULL)
    {
        return;
    }    
    while (*head != NULL)
    {
        victim = *head;
        *head = (*head)->next;
        free(victim);
    }
}