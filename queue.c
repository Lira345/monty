#include "monty.h"

/**
 * f_queue - Queues an element of stack from up top.
 * @head: A double pointer to stack head
 * @counter: Pointer to line number
 * Return: no return (void)
 */
void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueue - add node element to the tail of stack.
 * @n: new value
 * @head: a double pointer to stack head
 * Return: no return (void)
 */
void addqueue(stack_t **head, int n)
{
	stack_t *new_node;
	stack_t *temp;

	temp = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (temp)
	{
		while (temp->next)
			temp = temp->next;
	}
	if (!temp)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		temp->next = new_node;
		new_node->prev = temp;
	}
}
