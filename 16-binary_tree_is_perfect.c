#include "binary_trees.h"

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

/**
 * binary_tree_size - function to count size of binary tree
 * (i.e  number of nodes in the binary tree)
 *
 * @tree: root node
 * Return: size of binary tree
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

/**
 * binary_tree_is_perfect - Function to check if a binary tree is perfect
 * @tree: root node in the binary tree
 * Return: 0 if tree is not perfect else 1
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, nodes, perfect_nodes;

	/* If tree is NULL, return 0 */
	if (tree == NULL)
	{
		return (0);
	}

	/* Calculate the height of the tree */
	height = binary_tree_height(tree);

	/* Calculate the total number of nodes in the tree */
	nodes = binary_tree_size(tree);

	/* Calculate the number of nodes in a perfect binary tree of the same height*/
	perfect_nodes = (1 << height) - 1;

	/**
	 *Check if the number of nodes in the tree is
	 * equal to the number of nodes in a perfect binary tree
	 */
	return (nodes == perfect_nodes);
}
