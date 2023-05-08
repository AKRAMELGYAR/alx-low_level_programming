#include "main.h"
#include <stdio.h>

/**
 * error_file - wdbhv kw kj vkw vk vjnv wjnj
 * @file_from: file
 * @file_to: file
 * @argv: argument
 * Return: no return
*/

void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - krr je vn3ioj vrnnvenvj wjnvf
 * @argc: number
 * @argv: argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, error_close;
	ssize_t nchars, n;
	char x[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);

	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(file_from, x, 1024);
		if (nchars == -1)
			error_file(-1, 0, argv);
		n = write(file_to, x, nchars);
		if (n == -1)
			error_file(0, -1, argv);
	}

	error_close = close(file_from);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	error_close = close(file_to);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
