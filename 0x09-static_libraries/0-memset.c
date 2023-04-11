#include "main.h"

/**
 * _memset - dskjh kfh d osih censo
 * @s: pointer
 * @b: cnostant
 * @n: max bytes
 * Return: pointer
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; n > 0; itr++, n--)
	{
		s[itr] = b;
	}
	return (s);
}
