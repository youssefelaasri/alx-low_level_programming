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
	ssize_t fd;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}

	fd = open (filename, O_RDONLY);
	if (fd == -1)
		return (0);




	n = read (fd, buffer, letters);
	if (n == -1)
	{
		free(buffer);
		close (fd);
		return (0);
	}

	m = write(STDOUT_FILENO, buffer, n);
	if (m == -1 || m != n)
	{
		free(buffer);
		close (fd);
		return (0);
	}
	free (buffer);
	close (fd);
	return (m);
}
