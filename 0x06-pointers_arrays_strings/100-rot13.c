#include "main.h"

/**
 * rot13 - rot13 block
 * @s: pointer type character.
 * Description: encode a string using rot13.
 * Return: s.
 */

char *rot13(char *s)
{
	int i, j;
	
	char az[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char nz[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j =0; j < 52; j++)
		{
			if (az[j] == s[i])
			{
				s[i] = nz[j];
				break;
			}
		}
	}
	return (s);
}

