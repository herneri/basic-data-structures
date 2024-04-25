/*
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

#include "queue.h"

struct q_node *enqueue(struct q_node *queue, int data) {
	struct q_node *new = malloc(sizeof(struct q_node));
	new->data = data;

	if (queue == NULL) {
		new->link = queue;
		queue = new;
		return queue;
	}

	new->link = NULL;

	struct q_node *temp = queue;
	while (temp->link != NULL) {
		temp = temp->link;
	}

	temp->link = new;
	return queue;
}

struct q_node *dequeue(struct q_node *queue) {
	if (queue == NULL) {
		fprintf(stderr, "Queue is empty \n");
		return NULL;
	}

	struct q_node *temp = queue;
	queue = queue->link;
	free(temp);
	return queue;
}

int q_peek(struct q_node *queue) {
	if (queue == NULL) {
		fprintf(stderr, "q_peek: Queue is empty \n");
		return -1;
	}

	return queue->data;
}

void q_print(struct q_node *queue) {
	if (queue == NULL) {
		fprintf(stderr, "q_print: Queue is empty \n");
		return;
	}

	while (queue != NULL) {
		printf("%d \n", queue->data);
		queue = queue->link;
	}

	return;
}
