#include "binary_trees.h"

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *temp;

	if (parent->left != NULL)
	{
		temp = parent->left;
		new_node = binary_tree_node(parent, value);
		new_node->left = temp;

		return (new_node);
	}
	while (parent->left != NULL)
	{
		parent = parent->left;
	}

	new_node = binary_tree_node(parent, value);
	return (new_node);

}
