#include "monty.h"

/**
 * f_swap - interchanges two elements in the stack.
 * @head: pointer to the stack head
 * @counter: line number
 * Return: nothing
*/

void f_swap(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	auxillary = h->n;
	h->n = h->next->n;
	h->next->n = auxillary;
}

