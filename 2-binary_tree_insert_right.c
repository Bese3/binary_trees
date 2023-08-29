#include"binary_trees.h"


/**
 * binary_tree_insert_right - function binary_tree_insert_right inserts
 * a new node with the given value as the right child of
 * the parent node.
 *
 * @parent: The parent node of the binary tree where
 * the right child node will be inserted.
 * @value: The value to be inserted into the binary tree.
 *
 * Return: a pointer to the newly inserted node in the binary tree.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *new_ptr;
if (parent == NULL)
{
return (NULL);
}
new_ptr = binary_tree_node(parent, value);
if (new_ptr == NULL)
{
return (NULL);
}
if (parent->right != NULL)
{
new_ptr->right = parent->right;
parent->right = new_ptr;
}
parent->right = new_ptr;
return (new_ptr);
}
