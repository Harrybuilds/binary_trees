#include "binary_trees.h"

/**
 * binary_tree_height - function to calculate and return the
 * binary tree height
 *
 * @tree: root of tree whose height is to be returned
 * return: height of the tree
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t r_height, l_height;

	if (tree == NULL)
		return (0);

	r_height = tree->right ? 1 + binary_tree_height(tree->right): 0;
	l_height = tree->left ? 1 + binary_tree_height(tree->left): 0;
	return (l_height > r_height ? l_height : r_height);
}
