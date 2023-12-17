void _push(stack_t **stack, unsigned int line_number)
{
	stack_t *new = NULL;
	(void)line_number;

	new = newNode(value);

	new->next = *stack;
	if (*stack != NULL)
	{
		(*stack)->prev = new;
	}
	*stack = new;
}
