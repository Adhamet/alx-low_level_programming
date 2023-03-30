#include "lists.h"

/**
 * free_list - frees a list
 * @head: a pointer to the list head
 */

void free_list(list_t *head)
{
	list_t *cursor;
	while (head)
	{
		cursor = head->next;
		free(head->str);
		free(head);
		head = cursor;
	}
}
