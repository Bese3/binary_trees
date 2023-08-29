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
binary_tree_t *new_ptr;
binary_tree_t *holder;
new_ptr = binary_tree_node(parent, value);
if (new_ptr == NULL)
return (NULL);

if (parent->left != NULL)
{
holder = parent->left;
parent->left->parent = new_ptr;
new_ptr->left = holder;
}
parent->left = new_ptr;
return (new_ptr);
}
