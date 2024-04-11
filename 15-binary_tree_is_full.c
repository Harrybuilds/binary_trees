#include "binary_trees.h"

/**
 * binary_tree_is_full - Function to check if a binary tree is full
 * @tree: root node in the binary tree
 * Return: an integer represent if tree os full or not
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	/* If tree is NULL, return 0 */
	if (tree == NULL)
	{
		return (0);
	}

	/* If both children are NULL, the tree is full*/
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	/* If only one child is NULL, the tree is not full */
	if (tree->left == NULL || tree->right == NULL)
	{
		return (0);
	}

	/* Recursively check if both left and right subtrees are full */
	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
