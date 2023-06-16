#include <stdio.h>
/**
  *main - Entry point
  *Description: 'print base 16 digits'
  *Return: Always 0 (Success)
  */
int main(void)
{
	char a;
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (a = 'a'; a < 'g'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
