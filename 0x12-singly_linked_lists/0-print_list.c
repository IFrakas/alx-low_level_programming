#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * size_t print_list - prints all the elements of a list_t list.
 * @h: head of list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while( h != NULL)
	{
		if(h-> == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
