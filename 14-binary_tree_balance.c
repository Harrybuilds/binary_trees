#include "binary_trees.h"
/**
 * binary_tree_balance - function to measure the balance factor in the tree
 *
 * @tree: root node to measure the balance factor in the tree
 * Return: an integer rep. the difference in the tree height and tree->right
*/
size_t binary_tree_height(const binary_tree_t *tree);

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t r_height, l_height;

	if (tree == NULL)
		return (0);

	r_height = binary_tree_height(tree->right);
	l_height = binary_tree_height(tree->left);

	return ((int)(l_height - r_height));
}

/**
 * binary_tree_height - function to calculate and return the
 * binary tree height
 *
 * @tree: root of tree whose height is to be returned
 * Return: height of the tree
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t r_height, l_height;

	if (tree == NULL)
		return (0);

	r_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	l_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	return (l_height > r_height ? l_height : r_height);
}
