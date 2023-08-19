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
	ssize_t B;
	ssize_t D;
	char *A;
	ssize_t C;

	B = open(filename, O_RDONLY);
	if (B == -1)
		return (0);
	A = malloc(sizeof(char) * letters);
	D = read(B, A, letters);
	C = write(STDOUT_FILENO, A, D);

	free(A);
	close(B);
	return (C);
}
