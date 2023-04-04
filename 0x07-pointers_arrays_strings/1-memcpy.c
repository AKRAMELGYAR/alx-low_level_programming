#include "main.h"

/**
 * *_memcpy - kjbbfuhs coewihvln wvlwhcvldnc
 * @dest: memory
 * @src: source
 * @n: length
 *
 * Return: pointer
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; itr < n; itr++)
	{
		dest[itr] = src[itr];
	}
	return (dest);
}
