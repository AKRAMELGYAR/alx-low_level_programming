#include "main.h"

/**
 * _abs - function that computes the abslute value os an integer
 *
 * @n: takes in integer type input for function
 *
 * Retutn: Always 0 (success)
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
