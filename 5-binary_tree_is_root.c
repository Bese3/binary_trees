#include"binary_trees.h"


/**
 * binary_tree_is_root - function checks if a given node is
 * the root of a binary tree.
 *
 * @node: A pointer to a node in a binary tree.
 *
 * Return: 1 if the given node is a root node
 * (i.e., it is not NULL and it does not have a parent), and
 * 0 otherwise.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
if (node == NULL || node->parent != NULL)
return (0);
return (1);
}
