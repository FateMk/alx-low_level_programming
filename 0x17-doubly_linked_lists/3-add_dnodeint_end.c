# include "lists.h"
/**
 * add_dnodeint_end - adds anew node at the end
 * @head: pointer to the list 
 * @n: value to be stored
 * Return: address to the new element or NULL if failed
 */
 dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
 {
    dlistint_t *tmp, *new_node;

    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return (NULL);
    new_node->n = n;
    new_node->next = NULL;
    tmp = *head;
    while (tmp && tmp->next)
        tmp = tmp->next;
    if (tmp)
    {
        new_node->prev = tmp;
        tmp->next = new_node;
    }
    else
    {
        *head = new_node;
        new_node->prev = NULL;
    }
    return (new_node);        
 }
