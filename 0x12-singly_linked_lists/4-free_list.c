#include <stdio.h>
#include <string.h>
/**
 * free_list - frees list_t list
 * @head: list_t list
 */
 void free_list(list_t *head)
 {
  list_t *tmp;
  
  while (head)
  {
   tmp = head->next;
		 free(head->str);
		 free(head);
		 head = tmp;
  }
 }
