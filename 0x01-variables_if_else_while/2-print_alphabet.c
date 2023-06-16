#include <stdio.h>
/**
  *main - Entry point
  *Description: 'Print lowercase alphabets'
  *Return: Always 0 (Success)
  */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
