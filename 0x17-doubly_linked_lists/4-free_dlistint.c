#include "lists.h"

/**
 * free_dlistint - sdhgyvd jsvbsdbcvsckb x sbcvbc chbcxh hcxb
 * @head: pointer to the list to free
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
