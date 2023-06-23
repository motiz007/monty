#include "monty.h"

/**
 * _swap - swaps the top two items in stack
 * @stack: the stack
 * @line_number: the line
 * Return: void
*/
void _swap(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	int number = 0;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		fclose(file);
		_stack_free(*stack);
		exit(EXIT_FAILURE);
	}

	temp = *stack;
	number = temp->n;
	temp->n = temp->next->n;
	temp->next->n = number;
}
