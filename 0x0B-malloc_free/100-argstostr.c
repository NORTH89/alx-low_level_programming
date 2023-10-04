#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: the number of arguments
 * @av: an array of strings containing the arguments
 *
 * Return: pointer to the concatenated string or NULL on failure
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, len, total_len = 0, index = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len] != '\0')
			len++;
		total_len += len + 1;
	}

	str = malloc((total_len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len] != '\0')
		{
			str[index] = av[i][len];
			len++;
			index++;
		}
		str[index] = '\n';
		index++;
	}
	str[index] = '\0';

	return (str);
}
