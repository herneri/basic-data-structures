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

#include "linked_list.h"

struct l_node *l_add_head(struct l_node *list, int data) {
	struct l_node *new = malloc(sizeof(struct l_node));
	new->data = data;
	new->link = list;
	list = new;

	return list;
}

struct l_node *l_add_tail(struct l_node *list, int data) {
	if (list == NULL) {
		return l_add_head(list, data);
	}

	struct l_node *new = malloc(sizeof(struct l_node));
	new->data = data;
	new->link = NULL;

	struct l_node *temp = list;
	while (temp->link != NULL) {
		temp = temp->link;
	}

	temp->link = new;
	return list;
}

struct l_node *l_remove_head(struct l_node *list) {
	if (list == NULL) {
		fprintf(stderr, "l_remove_head: Can't remove head from empty list \n");
		return NULL;
	}

	struct l_node *temp = list;
	list = list->link;
	free(temp);

	return list;
}

struct l_node *l_remove_tail(struct l_node *list) {
	if (list == NULL) {
		fprintf(stderr, "l_remove_tail: Can't remove tail from empty list \n");
		return NULL;
	} else if (list->link == NULL) {
		return l_remove_head(list);
	}

	struct l_node *temp = list;
	struct l_node *prev = NULL;
	while (temp->link != NULL) {
		prev = temp;
		temp = temp->link;
	}

	prev->link = NULL;
	free(temp);

	return list;
}

void l_print(struct l_node *list) {
	if (list == NULL) {
		fprintf(stderr, "l_print: List is empty \n");
	}

	while (list != NULL) {
		printf("%d \n", list->data);
		list = list->link;
	}

	return;
}
