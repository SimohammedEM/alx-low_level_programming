#include <stdio.h>
#include <stdlib.h>

/**
 * main - used to print its own operation code
 * @arguc: its the number of arguments used
 * @arguv: it is the array of arguments
 *
 * Return: return Always 0 (Success)
 */
int main(int arguc, char *arguv[])
{
	int size_byte, i;
	char *ar;

	if (arguc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	size_byte = atoi(arguv[1]);

	if (size_byte < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ar = (char *)main;

	for (i = 0; i < size_byte; i++)
	{
		if (i == size_byte - 1)
		{
			printf("%02hhx\n", ar[i]);
			break;
		}
		printf("%02hhx ", ar[i]);
	}
	return (0);
}
