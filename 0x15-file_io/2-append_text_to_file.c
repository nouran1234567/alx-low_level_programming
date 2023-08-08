#include "main.h"

/**
 * append_text_to_file - Appends text to file.
 *
 * @filename: The name of the file to be created.
 *
 * @text_content: The text to be added at the end of a file.
 *
 * Return: -1 on failure, 1 on success.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0;
	int number = 0;
	int len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	number = write(o, text_content, len);

	if (fd == -1 || number == -1)
		return (-1);

	close(fd);

	return (1);
}

