#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
int max(int a, int b);
int height(const binary_tree_t *node);

/**
 * binary_tree_balance - function to
 * @tree: a binary tree
 * Return: number
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int letf, rights;

	if (tree == NULL)
		return (0);
	letf = height(tree->left);
	rights = height(tree->right);

	return (letf - rights);
}

/**
 * max - the function to find max
 * @a: number a
 * @b: int b
 * Return: a or b
 */
int max(int a, int b)
{
	return ((a > b) ? a : b);
}

/**
 * height - the function find the height of a tree
 * @node: node of tree
 * Return: height of tree
 */
int height(const binary_tree_t *node)
{
	int left, right;

	if (node == NULL)
		return (-1);

	left = height(node->left);
	right = height(node->right);
	return (max(left, right) + 1);
}
