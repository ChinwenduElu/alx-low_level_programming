#include "main.h"

/**
* append_text_to_file - appends text at the end of a file
* @filename: name of file
* @text_content: added content
* Return: 1 if the file exists and -1 if the fails does not exist
* or on faiure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int n_letters;
	int r_wr;

	if (filename == 0)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (n_letters = 0; text_content[n_letters]; n_letters++)
			;

		r_wr = write(fd, text_content, n_letters);

		if (r_wr == -1)
			return (-1);
	}
	close(fd);

	return (1);
}
