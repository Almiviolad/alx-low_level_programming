#include "main.h"
/**
 *read_textfile - read letters byte from a text file and output it on atdouy
 *@filename: name of the file
 *@letters: size of byte ro read and print
 *Return: size of bytes printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, size;
	int wr;
	char *c;

	if (!filename)
		return (0);
	c = malloc(letters * sizeof(char));
	if (c == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		free(c);
		return (0);
	}
	size = read(fd, c, letters);
	if (size < 0)
	{
		free(c);
		return (0);
	}
	wr = write(STDOUT_FILENO, c, size);
	if (wr < 0 || wr != size)
	{
		free(c);
		return (0);
	}
	close(fd);
	return ((size_t) wr);
}
