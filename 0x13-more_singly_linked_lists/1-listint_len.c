#include "lists.h"

/**
 *listint_len - returns the amount of elements in a list
 *@h: head of node
 *Return: returns the count
 */

size_t listint_len(const listint_t *h)
{
	int count = 0

	while (h != 0)
	{
		h = h->next;
		count++;
	}
	return (count);
}
