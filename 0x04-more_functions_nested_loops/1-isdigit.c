#include "main.h"
/**
 *_isdigit - function that verifies if a character is a digit or not
 *@c: char to be tested
 *Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
