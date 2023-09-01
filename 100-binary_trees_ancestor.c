#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_trees_ancestor - fn for tree ancestors
 * @first: forst noode
 * @second: second node
 * Return: Pointer to the LCa
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	const binary_tree_t *left, *right;

	for (left = first; left; left = left->parent)
		for (right = second; right; right = right->parent)
			if (left == right)
				return ((binary_tree_t *)left);
	return (NULL);
}
