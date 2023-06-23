#include "monty.h"

/**
 * _stack_free - frees the stack
 * @head: pointer to the head of stack
 * Return: void
*/
void _stack_free(stack_t *head)
{
	if (head)
	{
		_stack_free(head->next);
		free(head);
	}
}
