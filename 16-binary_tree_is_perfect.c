#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
int max(int a, int b);
int height(const binary_tree_t *node);

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int letf, rights, sub_left, sub_right;

	if (tree == NULL)
		return (0);
	letf = height(tree->left);
	rights = height(tree->right);

	if (letf == rights)
	{
		sub_left = binary_tree_is_perfect(tree->left);
		sub_right = binary_tree_is_perfect(tree->right);

		return (sub_left && sub_right);
	}
	return (0);
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
