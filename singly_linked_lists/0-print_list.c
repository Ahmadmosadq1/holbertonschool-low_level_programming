#include <stdio.h>
#include "lists.h"
/**
 * print_list - Entry point
 *
 * Description : prints the nodes list
 *
 *@h: pointer to struct
 *
 * Return: count.
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("%s", "[0] (nil)");
		else
		printf("[%u] %s", h->len, h->str);

	h = h->next;
	count++;
	printf("\n");
	}
	return (count);
}
