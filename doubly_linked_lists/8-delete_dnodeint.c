#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - Entry point
 * Description :inserting a node in a list.
 * @h: head node referance.
 * @idx: idx: the node index.
 * @n: the data.
 * Return: new.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	dlistint_t *temp_prev = NULL;/*distigngush it is before temp*/
	unsigned int count;

	if (index == 0)
	{
		if (*head)
		{
			temp = *head;
			*head = (*head)->next;
			if (*head)
				(*head)->prev = NULL;
			free(temp);
			return (1);
		}
	}

	for (count = 0; count < index - 1; count++)
	{
		temp = temp->next;
	if (!temp)
		return (0);
	}
	 temp_prev = temp;
    temp = temp->next;

    if (!temp)
        return (0);

    temp_prev->next = temp->next;
    if (temp->next)
        temp->next->prev = temp_prev;

    free(temp);
    return (1);
}

