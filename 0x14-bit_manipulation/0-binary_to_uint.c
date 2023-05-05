#include "main.h"

/**
 * binary_to_uint -converts a binary number to an unsigned int
 * @b: points to a string of 0 and 1 chars
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b);
{
	unsigned int t = 0;
	unsigned int rsult = 0;

	while (b[t] != '0' && b[t] != '1' && b[t] != '\0')
	{
		return (0);
		rsult <<= 1;
	}
	if (b[t] & 1)
		rsult += 1;
	t += 1
	return (rsult);
}
