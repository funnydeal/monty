#include "monty.h"

/**
 * addnode - adds node to the head stack
 * @head: pointer to the head of the stack
 * @n: value of the new node
 * Return: nothing.
*/

void addnode(stack_t **head, int n)
{
	stack_t *newNode, *auxillary;

	auxillary = *head;
	newNode = malloc(sizeof(stack_t));
	if (newNode == NULL)
	{
		printf("Error\n");
		exit(0);
	}
	if (auxillary)
		auxillary->prev = newNode;
	newNode->n = n;
	newNode->next = *head;
	newNode->prev = NULL;
	*head = newNode;
}

