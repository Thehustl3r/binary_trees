#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
int max(int a, int b);
int height(const binary_tree_t *node);

int binary_tree_balance(const binary_tree_t *tree)
{
	int letf, rights;

	if (tree == NULL)
		return (0);
	letf = height(tree->left);
	rights = height(tree->right);

	return (letf - rights);
}
int max(int a, int b)
{
	return ((a > b) ? a : b);
}
int height(const binary_tree_t *node)
{
	int left, right;

	if (node == NULL)
		return (-1);
		
	left = height(node->left);
	right = height(node->right);
	return (max(left, right) + 1);
}
