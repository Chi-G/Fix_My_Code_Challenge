#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - func that prints a doubly linkedlist of integers
 *
 * @h: pointer to the first element of a list
 *
 * Return: number of element printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n;

	n = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
