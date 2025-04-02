#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Entry point
 *
 * Description :prints the nodes in a traverse order
 *
 * @h: the pointer for head.
 * Return: count.
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;

	}
	return (count);
}


