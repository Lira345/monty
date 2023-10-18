#include "monty.h"

/**
 * f_pint - Prints the top element of the stack.
 * @head: Pointer to the head of the stack.
 * @counter: A line number for error reporting.
 * Return: no return (void)
 */
void f_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: Unable to print, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
