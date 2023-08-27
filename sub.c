#include "monty.h"

/**
  *f_sub - sustract one node from another in a stack
  *@head: pointer to the stack head
  *@counter: line number
  *Return: nothing
 */

void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *auxillary;
	int sus, nodes;

	auxillary = *head;
	for (nodes = 0; auxillary != NULL; nodes++)
		auxillary = auxillary->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	auxillary = *head;
	sus = auxillary->next->n - auxillary->n;
	auxillary->next->n = sus;
	*head = auxillary->next;
	free(auxillary);
}

