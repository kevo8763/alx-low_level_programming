#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: memory to allocate
 *Return: pointer to allocated memory/termination if error
 */
void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);
	if (m == NULL)
		exit(98);
	return (m);
}
