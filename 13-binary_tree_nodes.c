#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_nodes - function to count nodes of the tree
 * @tree: tree to use
 *Return: Nodes of the tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if ((tree->right != NULL) || (tree->left != NULL))
	{
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	}
	else
		return (0);
}
