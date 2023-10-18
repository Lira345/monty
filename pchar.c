#include "monty.h"

/**
 * f_pchar - Prints the characters on top of stacks followed by a new line.
 * @head: Pointer to stack head.
 * @counter: Pointer to line num.
 * Return: no return (void)
 */
void f_pchar(stack_t **head, unsigned int counter)
{
	stack_t *h;

	h = *head;
	if (!h)
	{
		fprintf(stderr, "L%d: Empty stack, can't pchar\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (h->n > 127 || h->n < 0)
	{
		fprintf(stderr, "L%d: Value out of range, can't pchar\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", h->n);
}
