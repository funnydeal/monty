#include "monty.h"

/**
 * f_mod - computes the second part of the linked list
 * @head: pointer to the stack head
 * @counter: line number
 * Return: nothing
*/

void f_mod(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	auxillary = h->next->n % h->n;
	h->next->n = auxillary;
	*head = h->next;
	free(h);
}

