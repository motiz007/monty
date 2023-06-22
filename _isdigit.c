#include "monty.h"

/**
 *  _isdigit - Finds if char is a digit or not
 *  @str: Character passed in
 *  Return: 1 for digit, 0 if not
 */
int _isdigit(char *str)
{

	int i = 0;

	while (str[i] != '\0')
	{
		if (isdigit(str[i]) == 0)
		{
			return (1);
		}
		i++;
	}

	return (0);
}
