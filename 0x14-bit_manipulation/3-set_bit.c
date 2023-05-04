#include "main.h"

/**
 * set_bit - ehrkbvkebkr vevbekbbev vektr rtrg
 * esrkvbekbvs
 * @n: A pointer to the bit
 * @index: The index
 * Return: -1 or value
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
*n ^= (1 << index);

	return (1);
}
