#include "lists.h"
/**
 * 
 * 
 */
void free_listint2(listint_t **head)
{
    listint_t *victim;

    if (head)
    {
        while (*head != NULL)
        {
            victim = *head;
            *head = victim->next;
            free(victim);
        }
}
