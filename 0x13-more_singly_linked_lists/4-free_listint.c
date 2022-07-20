#include "lists.h"
/**
 * free_listint - freea a listint_t list
 * @head: pointer to listint_t
 */
 void free_listint(listint_t *head)
 {
  listint_t *i;

  while (head)
  {
   i = head->next;
   free(head);
   head = i;
  }
 }
