#include "binary_trees.h"

/**
 * binary_tree_insert_right - function to insert and replace
 * the right node with a new node then make this new node to
 * be the parent of other subsequent nodes on the right
 *
 * @parent: parent pf the newnode
 * @value: value to be inserted into the new node
 * Return: a pointer to the newly created node
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *temp;

	if (parent == NULL)
	{
		return (NULL); 
	}

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return NULL;

	if (parent->right != NULL)
	{
		temp = parent->right;
		temp->parent = new_node;
		new_node->right = temp;
	}
		parent->right = new_node;

	return (new_node);

}
