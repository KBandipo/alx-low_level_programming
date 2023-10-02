#include "main.h"
/**
 * append_text_to_file -Function that Appends text at the end of a file.
 * @filename: The pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 * Return: Returns -1 or 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a, wr, l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	a = open(filename, O_WRONLY | O_APPEND);
	wr = write(a, text_content, l);

	if (a == -1 || wr == -1)
		return (-1);

	close(a);

	return (1);
}
