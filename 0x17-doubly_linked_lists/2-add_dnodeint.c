#include "lists.h"

/**
 * add_dnodeint - adds a node at the begging of a list
 * @head: pointer to the head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *h;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	h = *head;
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = h;

	if (h != NULL)
		h->prev = new_node;

	*head = new_node;

	return (new_node);
}
