#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text from file and print to STDOUT.
 *
 * @filename: text file to be read
 *
 * @letters: number of bytes to be read
 *
 * Return: number of letters read/printed. if fails, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t wt;
	ssize_t rd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	rd = read(fd, buf, letters);
	wt = write(STDOUT_FILENO, buf, rd);

	free(buf);
	close(fd);
	return (wt);
}
