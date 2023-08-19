#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Reads text from a file and print it.
 * @filename: file to read
 * @letters: number of bytes to be read
 * Return: number of bytes to read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int B;
	ssize_t D;
	char buf[READ_BUF_SIZE *8 );

	if (!filename || !letters)
		return (0);
	B = open(filename, O_RDONLY);
	if (B == -1)
		return (0);

	D = read(B, &buf[0], letters);
	D = write(STDOUT_FILENO, &buf[0], D);

	close(B);
	return (D);
}
