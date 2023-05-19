#include "lists.h"

/**
 * add_dnodeint_end - add new node at the end
 * @head: pointer at head
 * @n: value of new node
 * Return: address of new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *h;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	h = *head;
	new_node->n = n;
	new_node->next = NULL;

	if (h == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (h->next != NULL)
			h = h->next;
		h->next = new_node;
	}

	new_node->prev = h;

	return (new_node);
}
