#include "main.h"

/**
 * leet - leet block
 * @str: string type pointer
 * Description: encodes a string into 1337
 * Return: str
 */

char *leet(char *str)
{
	char num[] = "43071";
	char low[] = "aeotl";
	char up[] = "AEOTL";

	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; up[j] != '\0' && low[j] != '\0'; j++)
		{
			if (str[i] == up[j] || str[i] == low[j])
			{
				str[i] = num[j];
				break;
			}
		}
	}
	return (str);
}
