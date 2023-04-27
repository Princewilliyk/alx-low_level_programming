#include "lists.h"

/**
  * list_len - this returns the number of elements in a linked list
  * @h: the head of the link
  * Return:  it returns the number of elements
  */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
