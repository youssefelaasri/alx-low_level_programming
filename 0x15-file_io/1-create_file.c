#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
*create_file - fun
*@filename: file name
*@text_content: text content
*Return: depends
*/
int create_file(const char *filename, char *text_content)
{
	int o, w, l;

	if (filename == NULL)
		return (-1);
	l = strlen(text_content);
	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, l);
	if (w == -1 || o == -1)
		return (-1);

	close(o);
	return (1);
}
