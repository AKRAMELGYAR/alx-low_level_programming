#include "main.h"
/**
 *main - check the code
 *
 * Return: Always 0
*/

void print_alphabet_x10(void)
{
	int line, ch;

	for (line = 1; line <= 10; line++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}