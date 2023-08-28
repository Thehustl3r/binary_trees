#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_size - function to find the number of nodes
 * @tree: the tree to measure
 * Return: Number of nodes
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t lefts, rights;

	if (tree == NULL)
		return (0);
	lefts = binary_tree_size(tree->left);
	rights =  binary_tree_size(tree->right);

	return (lefts + rights + 1);
}
