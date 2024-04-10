#include "binary_trees.h"

/**
* binary_tree_is_leaf - function to check if a node is a leaf node
*
* @node: node to be checked
* Return: an integer representing whether the node is leaf or not
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node->left == NULL && node->right == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
