#include "monty.h"

/**
 * f_mul - Top two element to be multiplied.
 * @head: points to the stack head
 * @counter: line number
 * Return: nothing
*/

void f_mul(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int length = 0, auxillary;

	h = *head;
	while (h)
	{
		h = h->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	auxillary = h->next->n * h->n;
	h->next->n = auxillary;
	*head = h->next;
	free(h);
}

