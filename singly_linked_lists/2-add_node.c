#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - Entry point
 *
 * Description :adding nodes at the begining of the list
 * @str: the string
 * @head: poniter referance for head
 *
 * Return: new.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	int count = 0;
	char *s;

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	s = new->str;
	while (s[count] != '\0')
		count++;
	new->len = count;
	new->next = *head;/*assigned the new node ptr to next old node.*/
	*head = new;
	return (new);

}


