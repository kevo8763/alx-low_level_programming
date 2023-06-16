#include <stdio.h>
/**
  *main - Entry point
  *Description: 'Print upper and lowercase alphabets'
  *Return: Always 0 (Success)
  */
int main(void)
{
	char b;

	for (b = 'a'; b <= 'z'; b++)
	{
		putchar(b);
	}
	for (b = 'A'; b <= 'Z'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
