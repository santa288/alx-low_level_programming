#include "main.h"

/**
 * _strlen - returns length of the string
 * @s:string pointer to passed to this function
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

			}
