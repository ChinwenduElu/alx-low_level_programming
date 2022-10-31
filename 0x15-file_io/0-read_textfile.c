#include "main.h"

/**
* read_textfile - reads a text file and
* prints it to the POSIX standard output.
* @filename: file to read
* @letters: numbers of letter
* Return: actual number of letters it could read and print,
* else 0, if filename is NULL ad write fails
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n_rd, n_wr;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	n_rd = read(fd, buf, letters);
	n_wr = write(STDOUT_FILENO, buf, n_rd);

	close(fd);
	free(buf);
	return (n_rd);
}
