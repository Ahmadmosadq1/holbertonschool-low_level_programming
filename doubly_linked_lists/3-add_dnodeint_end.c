#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 * add_dnodeint_end - Entry point
 *
 * Description :adds the node to the last of the list
 *@head : the referance node pointer.
 *@n: the integer
 * Return: void.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *temp;

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		new->prev = temp;
		temp->next = new;
		return (new);
}
