#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_height - function to find the height of th tree
 * @tree: the tree to measure
 * Return: Size of the tree (height)
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right_length = 0;
	size_t left_length = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		left_length += binary_tree_height(tree->left) + 1;
	if (tree->right != NULL)
		right_length += binary_tree_height(tree->right) + 1;
	if (left_length > right_length)
		return (left_length);
	else
		return (right_length);

}
