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

#ifndef E_STACK_H
#define E_STACK_H

/*
	Stack initialization:
	struct s_node *stack = NULL;
*/

struct s_node {
	int data;
	struct s_node *link;
};

/* Add node to head, so that removal and printing are LIFO. */
struct s_node *push(struct s_node *stack, int data);

/* Following LIFO, remove the most recent (head) node. */
struct s_node *pop(struct s_node *stack);

/* Return the value at the top of the stack. */
int peek(struct s_node *stack);

/* Print the entire stack. The latest nodes are printed first. */
void s_print(struct s_node *stack);

#endif
