#include "lists.h"
/**
 * sum_listint - returns the sum of all the data og
 * @head: listint _t 
 * Return: 0 if list is empty
 */
 int sum_listint(listint_t *head)
 {
    unsigned int sum = 0;

    if (!head)
    {
        return (sum);
    }
    while (head)
    {
        sum += head->n;
        head = head->next;
    }
    return (sum);
 }