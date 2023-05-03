#include "lists.h"

/**
 * reverse_listint - a function to reverse a linked list
 * @head: double pointer
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous_ptr;
	listint_t *p;

	if (*head == NULL || (*head)->next == NULL)
		return (*head);
	previous_ptr = *head;
	p = (*head)->next;

	while (p != NULL)
	{
		(*head)->next = p->next;
		p->next = previous_ptr;
		previous_ptr = p;
		p = (*head)->next;
	}
	*head = previous_ptr;

	return (*head);
}
