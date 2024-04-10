
#include "binary_trees.h"

/**
 * binary_tree_delete - function to create a new node
 * and link this new node to the parent
 *
 * @tree: root node
 * Return: nothingis returned
*/

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	if (tree->left != NULL)
	{
		binary_tree_delete(tree->left);
	}
	if (tree->right != NULL)
	{
		binary_tree_delete(tree->right);
	}

	if (tree->parent != NULL)
	{
		binary_tree_print(tree);
	}

	binary_tree_print(tree);

	free(tree);

}
