#include "main.h"
/**
 * _strlen - Returns the length of a string.
 * @str: pointer.
 * Return: i
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
	return(i);
}

/**
 * _strlen - Strlen function but applied for constantchar pointer str
 * @str: char pointer
 * Return: i
 */
int _strlenc(const char *str)
{
	int i;
	for (i = 0; str[i] != 0; i++)
		;
	return (i)
}
