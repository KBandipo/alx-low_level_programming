#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - Function to Read text file and print to STDOUT.
 * @filename: The text file being read
 * @letters: The number of letters to be read
 * Return: Returns the actual number of bytes read and printed, or
 *         0 when the function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t filed;
	ssize_t br;
	ssize_t bw;

	filed = open(filename, O_RDONLY);
	if (filed == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	br = read(filed, buf, letters);
	bw = write(STDOUT_FILENO, buf, br);

	free(buf);
	close(filed);
	return (bw);
}
