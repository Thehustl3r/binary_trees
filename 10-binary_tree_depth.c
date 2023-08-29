#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_depth - function to find the longest chanel
 * @tree: the tree to measure depth from
 * Return: The size of the lngest chanel
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);
	if (tree->parent)
		depth += 1 + binary_tree_depth(tree->parent);
	return (depth);
}
