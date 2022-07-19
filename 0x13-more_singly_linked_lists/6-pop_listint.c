#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head; node to ne deleted
 * Return: 0 if linked list is empty
 */
 int pop_listint(listint_t **head)
 {
  int i;
  listint_t *new_head;
    
  if (head == NULL)
     return (NULL);
  new_head = *head;
  i = new_head->n;
  *head = new_head->next;
  free(new_head);
  return (i); 
 }
