#include "monty.h"
/**
* free_stack - frees a doubly linked list
* @head: head of the stack
* Return: nothing.
*/
void free_stack(stack_t *head)
{
	stack_t *auxillary;

	auxillary = head;
	while (head)
	{
		auxillary = head->next;
		free(head);
		head = auxillary;
	}
}

