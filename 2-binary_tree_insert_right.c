#include "binary_trees.h"

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *temp;

	if (parent->right != NULL)
	{
		temp = parent->right;
		new_node = binary_tree_node(parent, value);
		new_node->right = temp;

		return (new_node);
	}
	while (parent->right != NULL)
	{
		parent = parent->right;
	}

	new_node = binary_tree_node(parent, value);
	return (new_node);

}
