/*
    Copyright 2024 Eric Hernandez

    This file is part of basic-data-structures.

    basic-data-structures is free software: you can redistribute it and/or modify it under the terms of the GNU General
    Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.

    basic-data-structures is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even
    the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along with basic-data-structures. If not, see <https://www.gnu.org/licenses/>.
*/

#ifndef E_QUEUE_H
#define E_QUEUE_H

struct q_node {
	int data;
	struct q_node *link;
};

/* Add node to the tail of a queue, so that removal is FIFO and O(1). */
struct q_node *enqueue(struct q_node *queue, int data);

/* Remove the first node (head) that was added to the queue. */
struct q_node *dequeue(struct q_node *queue);

/* Return the first added element of the queue */
int q_peek(struct q_node *queue);

/* Print all elements in the queue */
void q_print(struct q_node *queue);

#endif
