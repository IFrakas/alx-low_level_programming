#include "lists.h"
/**
 * free_listint2 - frees a list
 * @head: linked list and head
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *curr;

	if (head != NULL)
	{
		curr = *head;

	while ((tmp = curr) != NULL)
	{
		curr = curr->next;
		free(tmp);
	}
	*head = NULL;
	}
}
