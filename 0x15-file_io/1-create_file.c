#include <fcntl.h>
#include <unistd.h>

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

	if (text_content != NULL)
	{
		for (l = 0; text_content[l] != '\0'; l++)
		{

		}
	}
	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, l);
	if (w == -1 || o == -1)
		return (-1);

	close(o);
	return (1);
}
