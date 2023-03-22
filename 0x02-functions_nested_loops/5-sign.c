#include "main.h"
/**
 * print_sign - print + if n greater than zero
 *             0 if n is zero and - if n less
 *             than zero.
 *
 * @n: takes intger type input for function
 *
 * Return: 1 if +, 0 if 0 and -1 if -
*/

int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");
		return (1);
	}
	else if (n == 0)
	{
		printf("0");
		return (0);
	}
	else
	{
		printf("-");
		return (-1);
	}
}
