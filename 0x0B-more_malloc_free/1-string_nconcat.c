#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - return length of a string
 *
 * @s: char type
 * Return:  length of string
 */

int _strlen(char *s)
{
	int b;

	for (b = 0; s[b] != '\0'; b++)
	{

	}
	return (b);
}

/**
 * string_nconcat - function to concatnate strings with n bytes
 * @s1: destination for concatnation
 * @s2: source of string
 * @n: int type for size of byte
 * Return: pointer to new memory allocated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int count, count1, size;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size = _strlen(s2);
	if (n >= size)
	{
		ptr = malloc((sizeof(s1) + sizeof(s2) + 1) * sizeof(char));
	}
	else if (n < size)
	{
		ptr = malloc((sizeof(s1) + n + 1) * sizeof(char));
	}

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (count = 0; s1[count] != '\0'; count++)
	{
		ptr[count] = s1[count];
	}
	for (count1 = 0; count1 < n && s2[count1] != '\0'; count1++)
	{
		ptr[count] = s2[count1];
		count++;
	}
	ptr[count] += '\0';
	return (ptr);
}