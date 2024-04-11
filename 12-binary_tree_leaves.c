#include "binary_trees.h"

/**
 * binary_tree_leaves - function to count leaves in a tree
 * @tree: root node in the tree
 * Return: number of leave present in the tree
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
