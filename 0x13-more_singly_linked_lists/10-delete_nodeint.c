#include "lists.h"
/**
 * delete_nodeint_at_index - bla bla bla
 * @head: bla
 * @index: index
 * Return: bla
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *p;
	listint_t *h = *head;
	unsigned int i;

	if (h == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(h);
		return (1);
	}
	i = 0;
	while (i < index - 1)
	{
		if (h == NULL || h->next == NULL)
			return (-1);
		h = h->next;
		i++;
	}
	p = h->next;
	h->next = p->next;
	free(p);
	return (1);
}
