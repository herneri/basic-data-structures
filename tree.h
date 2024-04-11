/*
    Copyright 2024 Eric Hernandez

    This file is part of basic-data-structures.

    basic-data-structures is free software: you can redistribute it and/or modify it under the terms of the GNU General
    Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.

    basic-data-structures is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even
    the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along with basic-data-structures. If not, see <https://www.gnu.org/licenses/>.
*/

#ifndef E_TREE_H
#define E_TREE_H

/* 
	Tree initialization:
	struct t_node *root = malloc(sizeof(struct t_node));
*/
struct t_node {
    int data;
    struct t_node *left;
    struct t_node *right;
};

/* Append a node to the leftmost side of the tree. */
struct t_node *add_left(struct t_node *tree, int data);

/* Append a node to the rightmost side of the tree. */
struct t_node *add_right(struct t_node *tree, int data);

/* Remove a node from the leftmost side of the tree. */
struct t_node *remove_left(struct t_node *tree);

/* Remove a node from the rightmost side of the tree. */
struct t_node *remove_right(struct t_node *tree);

#endif
