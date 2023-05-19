#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at given index
 * @head: pointer to head of list
 * @index: index to insert new node
 * Return: 1 if success, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *n1, *n2;
	unsigned int i = 0;

	n1 = *head;

	while (n1 != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = n1->next;

				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				n2->next = n1->next;

				if (n1->next != NULL)
					n1->next->prev = n2;
			}
			free(n1);
			return (1);
		}
		n2 = n1;
		n1 = n1->next;
		i++;
	}

	return (-1);
}
