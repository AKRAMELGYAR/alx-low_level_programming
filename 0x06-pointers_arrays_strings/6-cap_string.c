#include "main.h"
#include <stdio.h>

/**
 * islower - determines kdvkb dskbdksb wdkb
 * @c:ch
 * Return: 1 if true , 0 if else
*/
int islower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isDelimiter - fjdvhd jdnjkn  kbv dsfkbdjv kjdbvudfhv
 * @c: char
 * Return: 1 if true, 0
*/

int isDelimiter(char c)
{
	int i;
	char delimiter[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == delimiter[i])
			return (1);
	return (0);
}

/**
 * cap_string - capitalizes all words of a string.
 * @s: input
 * Return: strings
*/

char *cap_string(char *s)
{
	char *ptr = s;
	int f = 1;

	while (*s)
	{
		if (isDelimiter(*s))
			f = 1;
		else if (islower(*s))
		{
			*s -= 32;
			f = 0;
		}
		else
			f = 0;
		s++;
	}
	return (ptr);
}
