#include "shell.h"

/**
 * _strlen - function that returns a string's length
 * @s: string to check
 * Return: integer
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}

/**
 * _strcmp - compares the lexical patterns of two different languages.
 * @s1: first s
 * @s2: second s
 * Return: negative for s1 < s2,
 * positive for s1 > s2,
 * zero for s1 == s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 < *s2 ? -1 : 1);
}

/**
 * starts_with - a function that checks
 * if needle starts with haystack
 * @haystack: string
 * @needle: the substring
 * Return: address of next char
 * or NULL
 */
char *starts_with(const char *haystack, const char *needle)
{
	while (*needle)
		if (*needle++ != *haystack++)
			return (NULL);
	return ((char *)haystack);
}

/**
 * _strcat - a function that concatenates two strings
 * @dest: destination of the buffer
 * @src: source of the  buffer
 * Return: pointer
 */
char *_strcat(char *dest, char *src)
{
	char *ret = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (ret);
}
