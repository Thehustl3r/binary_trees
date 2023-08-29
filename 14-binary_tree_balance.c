#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
int binary_tree_balance(const binary_tree_t *tree)
{
	int letf, rights;

	if (tree == NULL)
		return (0);
	letf = binary_tree_balance(tree->left);
	rights = binary_tree_balance(tree->right);

	return (letf + rights);
}
