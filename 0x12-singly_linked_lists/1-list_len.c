#include "lists.h"
#include <stdio.h>
/**
 * list_len - return the number of element of linked list
 * @h: pointer to head node of the linked list
 *
 * Return: the number of element in h
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
