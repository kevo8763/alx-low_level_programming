#include "lists.h"
/**
 * pop_listint - deletes the head node of
 * a linked list
 * @head: head of a list.
 * Return: head node's data.
 */
int pop_listint(listint_t **head)
{
	int hnode;
	listint_t *h;
	listint_t *va;

	if (*head == NULL)
		return (0);

	va = *head;

	hnode = va->n;

	h = va->next;

	free(va);

	*head = h;

	return (hnode);
}
