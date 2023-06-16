#include <stdio.h>
/**
  *main - Entry point
  *Description: 'print o-9 with commas'
  *Return: Always 0 (Success)
  */
int main(void)
{
	int p;

	for (p = 48; p < 58; p++)
	{
		putchar(p);
		if (p == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
