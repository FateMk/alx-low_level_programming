#include <stdio.h>
#include <string.h>
/**
 * free_list - frees list_t list
 * @head: list_t list
 */
 void free_list(list_t *head)
 {
   list_t *list;
   for (list = head; list!= NULL; list = = str->next)
   {
    free(list->str);
    free(list);
    }
 }