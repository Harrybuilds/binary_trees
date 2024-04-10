#include "binary_trees.h"

/**
* binary_tree_postorder - function to tranverse through the
* tree in a post-order method
*
* @tree: root of the tree
* @func: function pointer(callback function) to be excuted on each node
* return: nothing is returned
*/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
