#include "lists.h"

/**
 * listint_len - returns the number of elements in
 * linked list
 * @h: head of a list
 * Return: numbers of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t y = 0;

	while (h != NULL)
	{
		h = h->next;
		y++;
	}
	return (y);
}
