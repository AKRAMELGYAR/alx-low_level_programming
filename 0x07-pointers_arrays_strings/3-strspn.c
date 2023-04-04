#include "main.h"

/**
 * _strspn - hjv sdbv kc ac adnc a cndc csdvhsd
 *
 * @s: string
 * @accept: bytes
 * Return: int
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int itr, jtr;

	for (itr = 0; s[itr] != '\0'; itr++)
	{
		for (jtr = 0; accept[jtr] != s[itr]; jtr++)
		{
			if (accept[jtr] == '\0')
				return (itr);
		}
	}
	return (itr);
}
