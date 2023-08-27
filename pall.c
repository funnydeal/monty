#include "monty.h"

/**
 * f_pall - TO PRINTS VALUE FROM THE TOP.
 * @head: pointer to stack head
 * @counter: number used
 * Return: nothing
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}

