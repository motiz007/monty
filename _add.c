#include "monty.h"

/**
 * _add - adss the top two items in stack
 * @stack: the stack
 * @line_number: the line
 * Return: void
*/
void _add(stack_t **stack, unsigned int line_number)
{
	int sum = 0;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		fclose(file);
		_stack_free(*stack);
		exit(EXIT_FAILURE);
	}

	sum = ((*stack)->n) + ((*stack)->next->n);
	(*stack)->next->n = sum;
	_pop(stack, line_number);
}
