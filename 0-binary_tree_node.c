#include"binary_trees.h"
#include"binary_trees.h"


/**
 * binary_tree_node - function creates a new node for a
 * binary tree with the given value and parent.
 *
 * @parent: A pointer to the parent node of the new
 * node being created. If the new node is the
 * root node, the parent parameter should be set to NULL.
 * @value: The value parameter is an integer value
 * that will be assigned to the new node in the
 * binary tree.
 *
 * Return: a pointer to a binary_tree_t structure.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *new_ptr;
new_ptr = malloc(sizeof(binary_tree_t));
if (new_ptr == NULL)
{
free(new_ptr);
return (NULL);
}
new_ptr->n = value;
new_ptr->right = NULL;
new_ptr->left = NULL;
new_ptr->parent = NULL;

if (parent != NULL)
new_ptr->parent = parent;
return (new_ptr);
}
