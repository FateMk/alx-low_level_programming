# include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning 
 * @head: pointer to the list
 * @n: value to store in node
 * Return: address of new node or NULL if failed
 */
 dlistint_t *add_dnodeint(dlistint_t **head, const int n)
 {
    dlistint_t *tmp, *new;

	tmp = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	if (tmp == NULL)
		new->next = NULL;
	else
	{
		while (tmp->prev)
			tmp = tmp->prev;

		tmp->prev = new;
		new->next = tmp;
	}
	*head = new;

	return (*head);
}
 }