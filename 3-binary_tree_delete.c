#include "binary_trees.h"

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
	{
		return;
	}
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
