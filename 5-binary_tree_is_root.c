#include "binary_trees.h"

/**
* binary_tree_is_root - function to check if a node is a root node
*
* @node: node to be checked
* Return: an integer representing whether the node is root or not
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}

	if (node->parent == NULL)
	{
		return (1);
	}
	else
		return (0);
}
