#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file to be created
 * @text_content: file text content
 *
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int d, perm, i;

	if (filename == NULL)
		return (-1);

	d = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (d == -1)
		return (-1);

	if (text_content)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
		perm = write(d, text_content, i);
		if (perm == -1)
			return (-1);
	}
	close(d);
	return (1);
}
