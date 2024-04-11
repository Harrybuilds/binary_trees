#include "binary_trees.h"

/**
 * binary_tree_uncle - function that finds the uncle of a node
 * @node: is a pointer to the node to find the uncle
 * Return: a pointer to the uncle node
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandparent = node->parent->parent;

	/**
	 * If node is NULL or the parent is NULL
	 * (i.e., node is the root), return NULL
	 */
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	{
		return (NULL);
	}


	/**
	 * Determine if the parent is the left or right child
	 * of the grandparent
	 */
	if (grandparent->left == node->parent)
	{
		/**
		 * If parent is the left child, return the right
		 * child of the grandparent (uncle)
		 */
		return (grandparent->right);
	}
	else
	{
		/**
		 * If parent is the right child, return the left child
		 * of the grandparent (uncle)
		 */
		return (grandparent->left);
	}
}
