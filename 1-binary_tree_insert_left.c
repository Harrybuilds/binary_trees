#include "binary_trees.h"

/**
 * binary_tree_insert_left - function to insert and replace
 * the left node with a new node then make this new node
 * to be the parent of other subsequent nodes on the left
 *
 * @parent: parent pf the newnode
 * @value: value to be inserted into the new node
 * Return: a pointer to the newly created node
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *temp;

	if (parent->left != NULL)
	{
		temp = parent->left;
		new_node = binary_tree_node(parent, value);
		new_node->left = temp;
		temp->parent = newnode;
		parent->left = newnode;
	}
	else
	{
		new_node = binary_tree_node(parent, value);
	}

	return (new_node);
}
