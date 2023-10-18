#include "monty.h"

/**
 * f_swap - Adds the two top elements in the stack
 * @head: A double pointer to stack head
 * @counter: Pointer to line number
 * Return: no return (void)
 */
void f_swap(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int stackLength = 0;
	int temp;

	h = *head;
	while (h)
	{
		h = h->next;
		stackLength++;
	}
	if (stackLength < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	temp = h->n;
	h->n = h->next->n;
	h->next->n = temp;
}
