#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a linked list
 * @head: head of a list
 * Return: head node's data
*/

int pop_listint(listint_t **head)
{
	int a;
	listint_t *h;
	listint_t *x;

	if (*head == NULL)
		return (0);

	x = *head;

	a = x->n;

	h = x->next;

	free(x);

	*head = h;

	return (a);
}
