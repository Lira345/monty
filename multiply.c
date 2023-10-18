#include "monty.h"
/**
 * f_mul - multiplies the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: nothing
*/
void f_mul(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int stacklength = 0, temp;

	h = *head;
	while (h)
	{
		h = h->next;
		stacklength++;
	}
	if (stacklength < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	temp = h->next->n * h->n;
	h->next->n = temp;
	*head = h->next;
	free(h);
}
