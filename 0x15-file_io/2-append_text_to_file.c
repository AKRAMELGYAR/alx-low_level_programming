#include "main.h"

/**
 * append_text_to_file - kdbvkfds ds vkf dskk drsfbvdkb
 * @filename: file
 * @text_content: content
 * Return: 1 or -1 or 0
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int x;
	int n;
	int r;

	if (!filename)
		return (-1);

	x = open(filename, O_WRONLY | O_APPEND);

	if (x == -1)
		return (-1);

	if (text_content)
	{
		for (n = 0; text_content[n]; n++)
			;

		r = write(x, text_content, n);

		if (r == -1)
			return (-1);
	}

	close(x);

	return (1);
}
