#include "lists.h"

/**
 * _strln - jnfvbdflnbkdf;kjjbndfdfbdgh
 * @s: fkhdvkhfvdflbhldfijljdjs;o
 *
 * Return: hdsbvuhdfvhldhlvjlidfj
*/

int _strln(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}

/**
 * print_list - shfbvhkfdvhlvhjldsjb
 * @h: kfdhkfhbhdfjhbshxl
 *
 * Return: size of list
*/
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}

