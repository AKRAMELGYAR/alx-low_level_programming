#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of
 * a linked list
 * @head: head of a list
 * Return: sum of data
*/

int sum_listint(listint_t *head)
{
	int s;

	s = 0;
	while (head != NULL)
	{
		s += head->n;
		head = head->next;
	}

	return (s);
}
