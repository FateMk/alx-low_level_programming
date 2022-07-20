#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at agiven position
 * @head: pointer to head of listint_t
 * @idx: index of list were nnew node should be added
 * @n: integer to be added
 * Return: address of the new node or NULL if it failed
 */
 listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
 {
    int size = 0;
    listint_t *new_node, *new;

    new_node = malloc(sizeof(listint_t));

    if (idx == 0)
    {
        new_node->n = n;
        new_node->next = (*head)->next;
        *head = new_node;
        return ((*head));
        
    }
    if (*head == NULL)
    {
        new_node->n = n;
        return (new_node);
    }
    else{
        do{
            new = *head;
            new = new->next;
            *head = (*head)->next;
            size++;
        }
        while (size != idx-1)
        {
            new_node->next = new->next;
            new_node->n = n;
            new->next = new_node;
            return ((*head))
        }
    }
 }
