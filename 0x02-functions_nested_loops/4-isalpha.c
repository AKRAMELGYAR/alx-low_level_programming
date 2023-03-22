#include "main.h"
/**
 * _isalpha - Checks if character is a letter both lower or upper case
 *
 * @c: checks input from other function.
 *
 * Return: 1 is c if true else 0
*/

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	return (0);
