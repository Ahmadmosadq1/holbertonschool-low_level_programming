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
	unsigned int count;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (temp == NULL)
	{
		new->prev = NULL;
		new->next = *h;
		temp->next = new;
		new->n = n;
		return (new);
	}

	for (count = 0; count < idx; count++)
	{
		if (temp == NULL)
			return (NULL);
		if (count == idx)
		{
			new->n = n;
			new->next = temp->next;
			temp->prev = new;
			temp->next = new;
		}
	}
		return (new);
}
