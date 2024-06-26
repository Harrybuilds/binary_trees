#include "binary_trees.h"

/**
* binary_tree_inorder - function to tranverse through the
* tree in a in-order method
*
* @tree: root of the tree
* @func: function pointer(callback function) to be excuted on each node
* Return: nothing is returned
*/

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
