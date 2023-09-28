#include "main.h"

/**
 * wildcmp - compare strings.
 * @s3: pointer to string params
 * @s4: pointer to string params
 * Return: 0
 */
int wildcmp(char *s3, char *s4)
{
	if (*s3 == '\0')
	{
		if (*s4 != '\0' && *s4 == '*')
		{
			return (wildcmp(s3, s4 + 1));
		}
		return (*s4 == '\0');
	}
	if (*s4 == '*')
	{
		return (wildcmp(s3 + 1, s4) || wildcmp(s3, s4 + 1));
	}
	else if (*s3 == *s4)
	{
		return (wildcmp(s3 + 1, s4 + 1));
	}
	return (0);
}

