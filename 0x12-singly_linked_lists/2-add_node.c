#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * add_node - adds a node at the beginning of a list_t list
 * @head: const double pointer of structure list_t for start
 * @str: const cshr pointer for data to be added
 * Return: List with new node for list_t, NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
    usigned int i;
	list_t *start = malloc(sizeof(list_t *));
    if (str = NULL)
    {
        start->len = 0;
        star->next = *head
    }
    if (start == NULL)
    return (NULL);
	start->next = *head;
	*head = start;
    star->str = strdup(str);
    for (i = 0; str[i]; i++)
    ;
    star->len = i;
    return (start);
}
int main(void)
{
    list_t *head;

    head = NULL;
    add_node(&head, "Alexandro");
    add_node(&head, "Asaia");
    add_node(&head, "Augustin");
    add_node(&head, "Bennett");
    add_node(&head, "Bilal");
    add_node(&head, "Chandler");
    add_node(&head, "Damian");
    add_node(&head, "Daniel");
    add_node(&head, "Dora");
    add_node(&head, "Electra");
    add_node(&head, "Gloria");
    add_node(&head, "Joe");
    add_node(&head, "John");
    add_node(&head, "John");
    add_node(&head, "Josquin");
    add_node(&head, "Kris");
    add_node(&head, "Marine");
    add_node(&head, "Mason");
    add_node(&head, "Praylin");
    add_node(&head, "Rick");
    add_node(&head, "Rick");
    add_node(&head, "Rona");
    add_node(&head, "Siphan");
    add_node(&head, "Sravanthi");
    add_node(&head, "Steven");
    add_node(&head, "Tasneem");
    add_node(&head, "William");
    add_node(&head, "Zee");
    print_list(head);
    return (0);
}
