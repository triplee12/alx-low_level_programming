#include "main.h"

/**
 * create_file - Create file in write and read only
 * @filename: Name of file to create
 * @text_content: String literals to write
 *
 * Return: 1 on success, otherwise -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	char buff[BUFFER_SIZE];
	int i = 0;

	fd = open(filename, O_CREAT | O_WRONLY, 0600);

	if (fd == -1)
	{
		return (0);
		exit(1);
	}

	if (filename == NULL)
	{
		return (-1);
		exit(1);
	}

	if (text_content != NULL)
	{
		write (fd, text_content, buff[i++]);
		close(fd);
	}
	else
	{
		write (fd, "", buff[i++]);
		close(fd);
	}
	return (1);
}
