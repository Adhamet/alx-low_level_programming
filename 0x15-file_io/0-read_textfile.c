#include "main.h"

/**
 * read_textfile - reads from a txt file.
 * @filename: the name of the file.
 * @letters: content of the file
 * Return: the numbers letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r, w;
	ssize_t fd = open(filename, O_RDONLY);
	char *buff = malloc(sizeof(char) * letters + 1);

	if (filename == NULL || buff == NULL || fd == -1)
		return (0);

	r = read(fd, buff, letters);

	if (r == -1)
		return (0);

	w = write(STDOUT_FILENO, buff, r);

	if ( w != r )
		return (0);

	free(buff);
	close(fd);

	return (r);
}
