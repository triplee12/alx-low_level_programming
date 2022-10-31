#include "main.h"

/**
 * read_textfile - Read string literals
 * @filename: File to read
 * @letters: Size of file buffer to read
 *
 * Return: size of file read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t i;
	char buff[BUFFER_SIZE];

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	if (filename == NULL)
		return (0);

	for (i = 0; buff[i] != EOF; i++)
		;
	read(fd, buff, letters);
	buff[letters] = '\0';
	close(fd);

	return (i);
}
