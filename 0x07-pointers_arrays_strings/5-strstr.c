#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates a substring.
 * @haystack: the string to search.
 * @needle: the substring to find.
 *
 * Return: a pointer to the beginning of the located substring, or NULL if
 * the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
		return (haystack);

	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 1; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
					break;
			}
			if (needle[j] == '\0')
				return (haystack + i);
		}
	}
	return (NULL);
}
