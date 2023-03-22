#include "main.h"

/**
 * print_last_digit - print last digit of a number.
 *
 * @n: takes number input
 *
 * Return: Lastdigit
*/

int print_last_digit(int n)
{
	int LastDigit;

	if (n < 0)
		lastDigit = -1 * (n % 10);
	else
		LastDigit = n % 10;
	_putchar(LastDigit + '0');
	return (lastDigit);
}
