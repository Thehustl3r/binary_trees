#include "binary_trees.h"
#include<stdio.h>
#include <stdlib.h>

/**
 * binary_tree_is_leaf - returns if the tree is a leaf
 * @node: the node to check
 * Return: 1 if node is a leaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	else if ((node->right != NULL) || (node->left != NULL))
		return (0);
	else
		return (1);
}
