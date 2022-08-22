#include "main.h"
/**
 * append_text_to_file - appends text to the end of file
 * @filename: name of the file
 * @text_content: text in the file
 *
 * Return: 1 0r -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int d, perm, i;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	d = open(filename, O_APPEND | O_WRONLY);
	if (d == -1)
		return (-1);

	for (i = 0; text_content[i] != '\0'; i++)
		;
	perm = write(d, text_content, i);
	if (perm == -1)
		return (-1);

	close(d);
	return (1);
}
