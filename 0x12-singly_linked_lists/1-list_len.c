#include "lists.h"
/**
 * list_len - function that returns the number of
 * elements in a linked list_t list.
 * @h: pointer to struct
 * Return: the number of nodes
*/
size_t list_len(const list_t *h)
{
	int count = 0;
	const list_t *ptr = NULL;

	if (h == NULL)
	{
		return (0);
	}

	ptr = h;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
