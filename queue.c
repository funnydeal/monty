#include "monty.h"

/**
 * f_queue - prints the top
 * @head: pointer to the stack head
 * @counter: line number
 * Return: nothing.
 */

void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueue - adds node to the tail of the stack
 * @n: value of the new node
 * @head: pointer to the head of the stack
 * Return: nothing.
*/

void addqueue(stack_t **head, int n)
{
	stack_t *newNode, *auxillary;

	auxillary = *head;
	newNode = malloc(sizeof(stack_t));
	if (newNode == NULL)
	{
		printf("Error\n");
	}
	newNode->n = n;
	newNode->next = NULL;
	if (auxillary)
	{
		while (auxillary->next)
			auxillary = auxillary->next;
	}
	if (!auxillary)
	{
		*head = newNode;
		newNode->prev = NULL;
	}
	else
	{
		auxillary->next = newNode;
		newNode->prev = auxillary;
	}
}

