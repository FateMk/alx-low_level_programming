#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: pointer type character
 * Return: s.
 */
char *cap_string(char *s)
{
	int i, j;
	int t;
	char n[] = ",;.!?(){}\n\t\" ";

	for (i = 0, t = 0; s[i] != '\0'; i++)
	{
		if (str[0] > 96 && str[0] < 123)
			t = 1;
		for (j = 0; n[j] != '\0'; j++)
		{
			if (n[j] == str[i])
				t = 1;
		}

		if (t)
		{
			if (s[i] > 96 && s[i] < 123)
			{
				s[i] -= 32;
				t = 0;
			}
			else if (s[i] > 64 && s[i] < 91)
				trigger = 0;
			else if (s[i] > 47 && s[i] < 58)
				t = 0;
		}
	}
	return (s);
}
