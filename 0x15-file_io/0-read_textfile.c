#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text from file and print to STDOUT.
 *
 * @filename: text file to be read
 *
 * @letters: number of bytes to be read
 *
 * Return: actual number of bytes read/printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t number;
	ssize_t text;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	text = read(fd, buf, letters);
	number = write(STDOUT_FILENO, buf, text);

	free(buf);
	close(fd);
	return (number);
}

