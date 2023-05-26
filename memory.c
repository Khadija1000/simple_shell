#include "shell.h"

/**
 * bfree - a function that frees a pointer
 * and nulls the address
 * @ptr: the pointer's adress
 * Return: 1 on success, otherwise 0.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}

