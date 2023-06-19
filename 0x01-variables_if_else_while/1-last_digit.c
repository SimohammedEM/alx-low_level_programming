#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  *main - Entry point
  *Description : 'get the last degit for a number'
  *Return: Always 0 (Succes)
  */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	if (ld > 5)
	{
		printf("Last degit of %d is %d and is greater than 5", n, ld);
	}
	else if (ld == 0)
	{
		printf("Last degit of %d is %d and is 0", n, ld);
	}
	else
	{
		printf("Last degit of %d is %d and and is less than 6 and not 0", n, ld);
	}
	return (0);
}
