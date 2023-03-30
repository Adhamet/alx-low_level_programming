#include "lists.h"

/**
 * list_len - finds number of elements in linked list
 *
 * @h: pointer to list
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while(h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
