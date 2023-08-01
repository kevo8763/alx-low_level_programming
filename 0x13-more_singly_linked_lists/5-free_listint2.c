#include "lists.h"
/**
 * free_listint2 - frees a linked list
 * @head: head of a list.
 * Return: no return.
 */
void free_listint2(listint_t **head)
{
	listint_t *li;
	listint_t *va;

	if (head != NULL)
	{
		va = *head;
		while ((li = va) != NULL)
		{
			va = va->next;
			free(li);
		}
		*head = NULL;
	}
}
