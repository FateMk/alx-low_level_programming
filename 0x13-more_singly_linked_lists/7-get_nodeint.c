#include "lists.h"
/**
 * get_nodeint_at_index - return the nth node of a  listint_t linked list
 * @head: pointer to the linked list
 * @index: index of node starting at 0
 * Return: NULL if node does not exist
 */
 listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
 {
  unsigned int i = 0;
  
  if (!head)
   return (0);
  while (head)
  {
   if (index == i)
    return (head);
   i++;
   head = head->next;
  }
  return (0);
 }
