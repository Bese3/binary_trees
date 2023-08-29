#include"binary_trees.h"

/**
 * binary_tree_insert_left - function inserts a new node with the
 * given value as the left child of the parent node in a
 * binary tree.
 *
 * @parent: The parent parameter is a pointer to the
 *  parent node of the binary tree.
 * @value: The value parameter is an integer value
 * that we want to insert into the binary tree.
 *
 * Return: a pointer to the newly inserted node in the binary tree.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
	{
		return (NULL);
	}
	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}
	parent->left = new_node;
	return (new_node);
}
