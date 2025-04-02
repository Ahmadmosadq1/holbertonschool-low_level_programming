#include<stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node_end- Entry point
 *
 * Description: adding last node in the list
 *
 * @head: head pointer.
 * @str: string
 * Return: new.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	list_t *temp;
	int count = 0;
	char *s;

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
		return (NULL);
	s = new->str;
	while (s[count])
		count++;
	new->len = count;
	new->next = NULL;

	if (*head == NULL)/*if list is empty*/
	{
		*head = new;
		return (new);
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
		return (new);
	}
}
