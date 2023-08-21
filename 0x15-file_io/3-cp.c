#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_buffer - gives bytes to a buffer.
 * @file: the file buffer is named in storing chars for.
 *
 * Return: the new-allocated buffer pointed.
 */

char *create_buffer(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buf);
}

/**
 * close_file - Closes the file descriptinf.
 * @fd: closes The file descriptor.
 */
void close_file(int fd)
{
	int a;

	a = close(fd);

	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the inside of a file in another.
 * @argc: means the number of arguments wich suplie.
 * @argv: the array of pointers.
 *
 * Return: 0 if successuful.
 *
 * Description: the argument  is incorrect - return code 97.
 * file_from not retyut or not read - return code 98.
 * file_to not be created - return code 99.
 * file_to or file_from cannot be closed - return code 100.
 */
int main(int argc, char *argv[])
{
	int B, A, D, C;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = create_buffer(argv[2]);
	A = open(argv[1], O_RDONLY);
	C = read(A, buffer, 1024);
	B = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (A == -1 || C == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}

		D = write(B, buf, C);
		if (B == -1 || D == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}

		C = read(A, buf, 1024);
		B = open(argv[2], O_WRONLY | O_APPEND);

	} while (C > 0);
	free(buf);
	close_file(A);
	close_file(B);
	return (0);
}
