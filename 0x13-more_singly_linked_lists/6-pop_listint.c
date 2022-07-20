#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head; node to ne deleted
 * Return: 0 if linked list is empty
 */
 int pop_listint(listint_t **head)
 {
  listint_t *copy_head = *head;
	 int rtrn_val;
 
	 if (copy_head)
	 {
 		rtrn_val = copy_head->n;
		 *head = copy_head->next;
		 free(copy_head);
	 }
	 else
		 rtrn_val = 0;
	 return (rtrn_val);
  }
