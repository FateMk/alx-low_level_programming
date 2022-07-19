#include <stdio.h>
#include <string.h>
/**
 * free_list - frees list_t list
 * @head: list_t list
 */
 void free_list(list_t *head)
 {
  list_t *temp;
  if (head)
  {
   while (head)
   {
    temp = head->next;
    free(head->str);
    free(head);
    head = temp;
   }
  }
 }
