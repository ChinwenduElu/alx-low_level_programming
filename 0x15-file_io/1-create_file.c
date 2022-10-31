#include "main.h"

/**
* create_file - creates a file
* @filename: name of the file to create
* @text_content:  is a NULL terminated string to write to the file
* Return: 1 on success and -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int fd;
	int n_letters;
	int r_wr;

	if (filename == 0)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == 0)
		text_content = "";

	for (n_letters = 0; text_content[n_letters]; n_letters++)
		;

	r_wr = write(fd, text_content, n_letters);

	if (r_wr == -1)
		return (-1);

	close(fd);
	return (1);
}
