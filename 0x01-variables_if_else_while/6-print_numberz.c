#include <stdio.h>
/**
  *main - Entry point
  *Description: 'Output numbers using putchar'
  *Return: Always 0 (Success)
  */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
