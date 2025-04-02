#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Entry point
 *
 * Description :returns any idex of the node list
 * @head: refreance head node
 * @index: node index
 * Return: index.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int count;

	for (count = 0; count < index; count++)
	{
		if (temp == NULL)
			return(NULL);
		temp = temp->next;
	}
	return (temp);
}
