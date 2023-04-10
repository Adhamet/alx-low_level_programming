#include "main.h"

/**
 * append_text_to_file - appends text to file
 *
 * @filename: name of file
 * @text_content: content of file to be appended
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, ltr = 0;

	if (filename == NULL)
		return (-1);

	while (text_content != NULL && text_content[ltr] != '\0')
		ltr++;

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, ltr);

	if (o == -1 || w == -1 || w != ltr)
		return (-1);

	close(o);
	return (1);
}
