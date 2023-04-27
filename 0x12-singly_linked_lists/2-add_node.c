#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - add a new node at the beginning
 * @head: double pointer to list_t list
 * @str: new string to add
 *
 * Return: the adress of the new element or Null if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;
	return (*head);
}
