/*
    Copyright 2024 Eric Hernandez

    This file is part of basic-data-structures.

    basic-data-structures is free software: you can redistribute it and/or modify it under the terms of the GNU General
    Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.

    basic-data-structures is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even
    the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along with basic-data-structures. If not, see <https://www.gnu.org/licenses/>.
*/

#ifndef E_LIST_H
#define E_LIST_H

/*
	The head of a list should be a l_node pointer which is initially set to NULL.

	struct l_node *head = NULL;
	head = l_add_head(head, 1);
*/

struct l_node {
	int data;
	struct l_node *link;
};

/* Add a node to the start of the list */
struct l_node *l_add_head(struct l_node *list, int data);

/* Add to the tail of a list. If the list is NULL, then l_add_head() will be called. */
struct l_node *l_add_tail(struct l_node *list, int data);

/* Remove the head node. */
struct l_node *l_remove_head(struct l_node *list);

/* Remove the tail node. If the "tail" is the only node, l_remove_head() is called. */
struct l_node *l_remove_tail(struct l_node *list);

/* Loop through the entire list and print the stored values. */
void l_print(struct l_node *list);

#endif
