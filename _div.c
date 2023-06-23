#include "monty.h"

/**
 * _div - divides the top two items in stack
 * @stack: the stack
 * @line_number: the line
 * Return: void
*/
void _div(stack_t **stack, unsigned int line_number)
{
	int div = 0;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		fclose(file);
		_stack_free(*stack);
		exit(EXIT_FAILURE);
	}

	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		fclose(file);
		_stack_free(*stack);
		exit(EXIT_FAILURE);
	}

	div = ((*stack)->next->n) / ((*stack)->n);
	(*stack)->next->n = div;
	_pop(stack, line_number);
}