#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * _mul - Divides the next top value by the top value.
 * @stack: Stack given by main.
 * @line_cnt: Line counter.
 *
 * Return: void.
 */
void _mul(stack_t **stack, unsigned int line_cnt)
{
	int result;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_cnt);
		exit(EXIT_FAILURE);
		return;
	}

	result = ((*stack)->next->n) * ((*stack)->n);
	_pop(stack, line_cnt);/*For top node*/
	(*stack)->n = result;
}


