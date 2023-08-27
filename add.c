#include "monty.h"

/**
 * f_add - adds element to the stack from top.
 * @head: points to the stack head
 * @counter: line number
 * Return: nothing
*/

void f_add(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int auxillary, length = 0;

	h = *head;
	while (h)
	{
		h = h->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	auxillary = h->n + h->next->n;
	h->next->n = auxillary;
	*head = h->next;
	free(h);
}

