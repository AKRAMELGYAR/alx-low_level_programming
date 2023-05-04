#include "main.h"

/**
 * flip_bits - erkbkebnvbenvk ekvbf vdkjbf ev e kefv
 * dkfhvbkjsdbf dfkvbfjdbv dlfvdll
 * @n: number
 * @m: int
 * Return: value
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m, bits = 0;


	while (x > 0)
	{
		bits += (x & 1);
		x >>= 1;
	}

	return (bits);
}
