/*
   	stack.c: Basic stack implementation with integer elements

    Copyright 2024 Eric Hernandez

    This file is part of basic-data-structures.

    basic-data-structures is free software: you can redistribute it and/or modify it under the terms of the GNU General
    Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.

    basic-data-structures is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even
    the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along with basic-data-structures. If not, see <https://www.gnu.org/licenses/>.
*/

#include <stdio.h>
#include <stdlib.h>

#include "stack.h"

struct s_node *push(struct s_node *stack, int data) {
	struct s_node *new = malloc(sizeof(struct s_node));
	new->data = data;
	new->link = stack;
	stack = new;

	return stack;
}

struct s_node *pop(struct s_node *stack) {
	if (stack == NULL) {
		fprintf(stderr, "Stack is empty \n");
		return NULL;
	}

	struct s_node *temp = stack;
	stack = stack->link;
	free(temp);

	return stack;
}

int peek(struct s_node *stack) {
	return stack->data;
}

void s_print(struct s_node *stack) {
	if (stack == NULL) {
		fprintf(stderr, "Stack is empty \n");
		return;
	}

	while (stack != NULL) {
		printf("%d \n", stack->data);
		stack = stack->link;
	}

	return;
}
