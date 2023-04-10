#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: name of the file
 * @text_content: content to write to the file
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int o, w, letters = 0;

	if (filename == NULL)
		return (-1);

	while (text_content != NULL && text_content[letters] != '\0')
		letters++;

	o = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	w = write(o, text_content, letters);

	if (o == -1 || w == -1 || w != letters)
		return (-1);

	close(o);

	return (1);
}
