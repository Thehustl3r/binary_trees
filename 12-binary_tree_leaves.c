#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_leaves - returns the number of leaves in tree
 * @tree: the tree to check in
 * Return: the number of the leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leave_right, leave_left;

	if (tree == NULL)
		return (0);
	if ((tree->right == NULL) && (tree->left == NULL))
		return (1);
	leave_left = binary_tree_leaves(tree->left);
	leave_right = binary_tree_leaves(tree->right);

	return (leave_left + leave_right);
}
