#include "lists.h"
/**
 *print_listint - prints the content of a list
 *@h: the head pointer
 *Return: returns the amount of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h)
	{
		printf("%d", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
