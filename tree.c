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

#include "tree.h"

struct t_node *add_left(struct t_node *tree, int data) {
	struct t_node *new = malloc(sizeof(struct t_node));
	new->data = data;
	new->left = NULL;
	new->right = NULL;

	struct t_node *temp = tree;
	while (temp->left != NULL) {
		temp = temp->left;
	}

	temp->left = new;
	return tree;
}

struct t_node *add_right(struct t_node *tree, int data) {
	struct t_node *new = malloc(sizeof(struct t_node));
	new->data = data;
	new->left = NULL;
	new->right = NULL;

	struct t_node *temp = tree;
	while (temp->right != NULL) {
		temp = temp->right;
	}

	temp->right = new;
	return tree;
}

struct t_node *remove_left(struct t_node *tree) {
	if (tree->left == NULL) {
		fprintf(stderr, "remove_left: No left nodes remaining to remove\n");
		return tree;
	}

	struct t_node *temp = tree;
	struct t_node *prev = NULL;

	while (temp->left != NULL) {
		prev = temp;
		temp = temp->left;
	}

	prev->left = NULL;
	free(temp);
	return tree;
}

struct t_node *remove_right(struct t_node *tree) {
	if (tree->right == NULL) {
		fprintf(stderr, "remove_right: No right nodes remaining to remove\n");
		return tree;
	}

	struct t_node *temp = tree;
	struct t_node *prev = NULL;

	while (temp->right != NULL) {
		prev = temp;
		temp = temp->right;
	}

	prev->right = NULL;
	free(temp);
	return tree;
}
