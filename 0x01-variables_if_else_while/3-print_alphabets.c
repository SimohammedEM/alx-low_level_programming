#include<stdio.h>
/**
  *main -Entry point
  *Description: print alaphabet lowercase and uppercases'
  *Return: 0
  */
int main(void)
{
int n = 97;
int m = 65;
int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');

return (0);
}
