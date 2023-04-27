#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all elements of linked list
 * @h: pointer to the head node of list
 *
 * Return: the number of node
 */
size_t print_list(const list_t *h)
{
	size_t cont = 0;
	const list_t *current  = h;

	while (current != NULL)
	{
		if (current->str != NULL)
			printf("[%u]%s\n", current->len, current->str);
		else
			printf("[0](nil)\n");
		cont++;
		current = current->next;
	}
	return (cont);
}
