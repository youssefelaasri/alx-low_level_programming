#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
*read_textfile - fun
*@filename: file
*@letters: number of letters
*Return: depends
**/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n, m;
	int fd;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}


	n = read(fd, buffer, letters);
	if (n < 0)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	m = write(STDOUT_FILENO, buffer, n);
	if (m < 0 || m != n)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	return (m);



}
