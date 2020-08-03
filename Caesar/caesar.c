#include "caesar.h"

int i = 0;
int c = 0;

char * verschluesseln(char * name)
{
	for (i = 0; name[i] != '\0'; i++)
	{
		if (name[i] == '\n')
		{
			return name;
		}

		c = (int)name[i];

		c += 3;

		name[i] = (char)c;
	}

	return name;
}

char * entschluesseln(char * data)
{
	for (i = 0; data[i] != '\0'; i++)
	{
		if (data[i] == '\n')
		{
			return data;
		}

		c = (int)data[i];

		c -= 3;

		data[i] = (char)c;
	}

	return data;
}
