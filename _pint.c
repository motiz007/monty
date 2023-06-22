#include "monty.h"

/**
 * _pint - prints the value at the top of the stack
 * @stack: the stack
 * @line_number: the line
 * Return: void
*/
void _pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		fclose(file);
		_stack_free(*stack);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*stack)->n);
}
