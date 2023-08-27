#include "monty.h"

/**
  *f_rotl- rotates the stack to the top
  *@head: pointer to the stack head
  *@counter: line number
  *Return: nothing
 */

void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *tmp = *head, *auxillary;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	auxillary = (*head)->next;
	auxillary->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = auxillary;
}

