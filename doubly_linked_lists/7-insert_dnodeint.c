#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Entry point
 *
 * Description :inserting a node in a list.
 *
 * @h: head node referance.
 *
 * @idx: idx: the node index.
 *
 * @n: the data.
 * Return: new.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	dlistint_t *temp_prev = temp->prev;
	unsigned int count;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->prev = NULL;
		new->next = *h;
		if (*h)
			new->next = *h;
		*h = new;
		return (new);
	}

	for (count = 0; count < idx - 1; count++)
		temp = temp->next;

	if (!temp)
	{
		free(new);
		return (NULL);
	}

	temp_prev  = temp;
	temp = temp->next;
	new->next = temp;
	new->prev = temp_prev;

	if (temp)
		temp->prev = new;
	if (temp_prev)
		temp_prev->next = new;
	return (new);
}
