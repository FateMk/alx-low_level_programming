#include "lists.h"
/**
 * get_nodeint_at_index - return the nth node of a  listint_t linked list
 * @head: pointer to the linked list
 * @index: index of node starting at 0
 * Return: NULL if node does not exist
 */
 listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
 {
    int i;

    if (index == NULL)
    {
        return (NULL);
    }
    i = 0;
    while (i < index)
    {
        if (head)
        {
            head = head->next;
        }
        i++;
    }
    if (head)
    {
        return (head);
    }
    else{
        return (NULL);
    }
