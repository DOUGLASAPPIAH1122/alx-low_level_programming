#include "main.h"

/**
 * _strchr - Locate a character in a string.
 * @s: The string to be searched.
 * @c: The character to be locate.
 *
 * Return: if c is found - a pointer to the first occurance.
 * if c is not fount - NULL.
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
