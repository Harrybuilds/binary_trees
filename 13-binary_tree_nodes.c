#include "binary_trees.h"

/**
 * binary_tree_nodes - function to count nodes with at least 1 node
 *
 * @tree: root node in the tree
 * Return: number of nodes with at least 1 node in the tree
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t t_nodes;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
	{

		t_nodes = binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
		return (t_nodes + 1);
	}
	else
		return (0);
}
