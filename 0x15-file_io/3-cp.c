#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Creats buffer to find 1024 bytes.
 *
 * @file: The file name buffer is storing its chars.
 *
 * Return: The new buffer found.
 */

char *create_buffer(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buff);
}

/**
 * close_file - Closes the  file.
 *
 * @fd: The file being closed.
 *
 * Return: void
 */

void close_file(int fd)
{
	int cls;

	cls = close(fd);

	if (cls == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents from file to another.
 *
 * @argc: The arguments number.
 *
 * @argv: Pointers to the arguments.
 *
 * Return: Always 0.
 *
 * Description: If the argument count is incorrect - exit code 97.
 *
 * If file_from does not exist - exit code 98.
 *
 * If file_to cannot be created/written to - exit code 99.
 *
 * If file_to or file_from can not be closed - exit code 100.
 */

int main(int argc, char *argv[])
{
	int from;
	int to;
	int rd;
	int wt;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	rd = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		wt = write(to, buff, rd);
		if (to == -1 || wt == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		rd = read(from, buff, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (rd > 0);

	free(buff);
	close_file(from);
	close_file(to);

	return (0);
}

