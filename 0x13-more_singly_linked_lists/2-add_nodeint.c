#include "lists.h"

/**
 * add_nodeint - adds a new mode at the beginning of a listint_t list
 * @head: pointer to listint_t
 * @n: const integer
 * Return: the address of the element

 */
 listint_t *add_nodeint(listint_t **head, const int n)
 {
    listint_t *new_head, i;
    new_head = malloc(sizeof(listint_t *));

    new_head->n = n;
    new_head->next = *head;
    *head = new_head;
    return (new_head);
    
 }
