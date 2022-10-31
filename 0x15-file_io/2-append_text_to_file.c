#include "main.h"

/**
 * append_text_to_file - Appends text at the end of file
 * @filename: Name of file to append text to
 * @text_content: String literal to append
 *
 * Return: 1 on success, otherwise -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int i;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}
	
	fd = open(filename, O_WRONLY | O_APPEND);

	write(fd, text_content, i);

	if (fd == -1)
		return (-1);
	
	close(fd);

	return (1);
}
