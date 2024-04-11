#include "binary_trees.h"

/**
 * binary_tree_sibling - function that finds the sibling of a node
 * @node: is a pointer to the node to find the sibling
 * Return: a pointer to the sibling node
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	/* If node is NULL or the parent is NULL, return NULL */
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	/**
	 * If node is the left child, return the right child
	 *of the parent (if it exists)
	 */

	if (node->parent->left == node)
	{
		return (node->parent->right);
	}
	/**
	 * If node is the right child, return the left child of
	 * the parent (if it exists)
	 */
	else if (node->parent->right == node)
	{
		return (node->parent->left);
	}

	/* If node has no sibling, return NULL */
	return (NULL);
}
