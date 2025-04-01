#include <stdlib.h>
#include "lists.h"
/**
 * list_len - Entry point
 *
 * Description :prints the length of the node
 *
 * @h: the head.
 * Return: count.
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}

