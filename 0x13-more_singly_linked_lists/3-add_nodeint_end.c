#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer listint_t
 * @n: integer to be ad
 * Return: address of the new elements
 */
 listint_t *add_nodeint_end(listint_t **head, const int n)
 {
  listint_t *last, *new_last;
  
  new_last = malloc(sizeof(listint_t));
  new_last->n = n;
  new_last->next = NULL;
  last = *head;
  while (last->next != NULL)
  {
      last = last->next;
  }
  last->next = new_last;
  return (new_last);
 }
 
