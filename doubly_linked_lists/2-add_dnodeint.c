#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - Entry point
 *
 * Description :adding a node at the begining of the list.
 *
 *@head: the head referance.
 *@n: the integer list.
 * Return: new.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *temp;

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	temp = *head;
	new->next = temp;
	temp->prev = new;
	*head = new;
	return (new);
}


