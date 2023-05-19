#include "lists.h"

/**
 * insert_dnodeint_at_index - insert new node at a given position.
 * @h: pointer to head of list
 * @idx: index of new node
 * @n: value of new node
 * Return: address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *head;
	unsigned int i = 1;

	if (idx == 0)
		new_node = add_dnodeint(h, n);
	else
	{
		head = *h;

		while (head != NULL)
		{
			if (i == idx)
			{
				if (head->next == NULL)
					new_node = add_dnodeint_end(h, n);
				else
				{
					new_node = malloc(sizeof(dlistint_t));

					if (new_node != NULL)
					{
						new_node->n = n;
						new_node->next = head->next;
						new_node->prev = head;
						head->next->prev = new_node;
						head->next = new_node;
					}
				}
				break;
			}
			head = head->next;
			i++;
		}
	}

	return (new_node);
}
