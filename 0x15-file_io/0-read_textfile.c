#include "main.h"

/**
 * read_textfile - svhkvk vdsbvsdk vksdf sd, fsdv ,d  ksjdbfj
 * @filename: file
 * @letters: letters
 * Return: numbers of letters or 0
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int x;
	ssize_t nr, nw;
	char *y;

	if (!filename)
		return (0);

	x = open(filename, O_RDONLY);

	if (x == -1)
		return (0);

	y = malloc(sizeof(char) * (letters));
	if (!y)
		return (0);

	nr = read(x, y, letters);
	nw = write(STDOUT_FILENO, y, nr);

	close(x);

	free(y);

	return (nw);
}
