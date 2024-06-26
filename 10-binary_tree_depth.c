#include "binary_trees.h"

/**
 * binary_tree_depth - function to count tree depth
 * @tree: node to start counting from
 * Return: depth of thebinary tree
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	/*Initialize depth counter*/
	size_t depth = 0;

	if (tree == NULL)
	{
		return (0);
	}
	/*Traverse up to the root while incrementing depth*/
	while (tree->parent != NULL)
	{
		tree = tree->parent;
		depth++;
	}

	return (depth);
}

