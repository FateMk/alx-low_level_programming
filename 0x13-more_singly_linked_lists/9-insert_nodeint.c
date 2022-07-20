#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node to a listint_t
 *                           list at a given position.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @idx: The index of the listint_t list where the new
 *       node should be added - indices start at 0.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp_node = *head;
	unsigned int i = 0;

	while (temp_node && i < idx - 1)
	{
		temp_node = temp_node->next;
		i++;
	}
	if (temp_node || (i == idx - 1 || idx == 0))
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node)
		{
			new_node->n = n;
			if (idx == 0)
			{
				new_node->next = *head;
				*head = new_node;
			}
			else
			{
				new_node->next = temp_node->next;
				temp_node->next = new_node;
			}
			return (new_node);
		}
	}
	return (NULL);
}
