#include "main.h"

/**
 * append_text_to_file - Appends text to a file.
 * @filename: name of the file.
 * @text_content: text to xrite to the end of the file.
 *
 * Return: 1 on succes 0 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a;
	int b;
	int ln = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (ln = 0; text_content[ln];)
			ln++;
	}

	a = open(filename, O_WRONLY | O_APPEND);
	b = write(a, text_content, ln);

	if (a == -1 || b == -1)
		return (-1);

	close(a);

	return (1);
}

