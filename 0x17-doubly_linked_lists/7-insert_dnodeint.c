#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts the nth node of a dlistint_t linked list.
 * @h: linked list to print.
 * @idx: node to look for.
 * @n: data of the node.
 * Return: the node at index.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *before, *after, *new;

	if (h == NULL || *h == NULL)
		return (NULL);
	while ((**h).prev != NULL)
		*h = (**h).prev;
	if (idx == 0)
		new =  add_dnodeint(h, n);
	else
	{
		before = *h;
		if (before == NULL && idx != 0)
			return (NULL);
		idx--;
		for (i = 0; i != idx && before->next != NULL; i++)
			before = before->next;
		if (idx > i)
			return (NULL);
		after = before->next;
		if (after == NULL)
			new = add_dnodeint_end(h, n);
		else
		{
			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
				return (NULL);
			new->n = n;
			before->next = new;
			after->prev = new;
			new->next = after;
			new->prev = before;
		}
	}
	return (new);
}
