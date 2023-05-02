#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head of a list
 * Return: no return
*/

void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *xa;

	if (head != NULL)
	{
		xa = *head;
		while ((temp = xa) != NULL)
		{
			xa = xa>next;
			free(temp);
		}
		*head = NULL;
	}
}
