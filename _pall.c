#include "monty.h"

/**
 * _pall - prints out stack from the top
 * @stack: the stack
 * @line_number: the line interpreted
 * Return: void
*/
void _pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	(void)line_number;

	temp = *stack;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
