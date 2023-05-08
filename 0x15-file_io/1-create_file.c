#include "main.h"

/**
 * create_file - creates a file
 * @filename: file
 * @text_content: file
 * Return: 1 or 0
*/

int create_file(const char *filename, char *text_content)
{
	int x;
	int n;
	int y;

	if (!filename)
		return (-1);

	x = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (x == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (n = 0; text_content[n]; n++)
		;

	y = write(x, text_content, n);

	if (y == -1)
		return (-1);

	close(x);

	return (1);
}
