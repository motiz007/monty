#include "monty.h"

/**
 * _pop - removes value at the top of the stack
 * @stack: the stack
 * @line_number: the line
 * Return: void
*/
void _pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		fclose(file);
		_stack_free(*stack);
		exit(EXIT_FAILURE);
	}

	temp = (*stack)->next;
	free(*stack);
	*stack = temp;

	if (!*stack)
		return;
	(*stack)->prev = NULL;
}
