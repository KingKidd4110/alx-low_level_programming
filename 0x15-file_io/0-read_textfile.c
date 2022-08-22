#include "main.h"

/**
 * read_textfile -  reads file and prints it to the POSIX std output
 * @filename: name of text file
 * @letters: number of letters
 *
 * Return: 0 or number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int d;
	ssize_t rcount, wcount;
	char *buf;

	if (filename == NULL)
		return (0);

	d = open(filename, O_RDWR);
	if (d == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		free(buf);
		return (0);
	}
	rcount = read(d, buf, letters);
	if (rcount == -1)
		return (0);


	wcount = write(STDOUT_FILENO, buf, rcount);
	if (wcount == -1 || rcount != wcount)
		return (0);
	free(buf);

	close(d);
	return (wcount);
}
