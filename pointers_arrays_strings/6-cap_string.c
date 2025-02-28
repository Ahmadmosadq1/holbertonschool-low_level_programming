#include "main.h"

/**
 * *cap_string - Entry point
 *
 * Description :prints capitals words with separatprs.
 *
 *@str: the string.
 *
 * Return: str.
 */

char *cap_string(char *str)
{
	int i = 0;
	int next_i = 1;
	char separators[] = " \t\n,;.!?\"(){}";

	while (str[i] != '\0')
	{
		if (next_i  && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
		}
		next_i = 0;
		for (int j = 0; separators[j] != '\0'; j++;)
			if (str[i] == separators[j])
			{
				next_i = 1;
				break;
			}
	}
	i++;
}
return (str);
}

