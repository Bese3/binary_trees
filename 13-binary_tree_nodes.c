#include"binary_trees.h"


/**
 * binary_tree_nodes - function calculates the
 * number of nodes in a binary tree.
 *
 * @tree: The parameter "tree" is a pointer to a binary tree node.
 *
 * Return: the number of nodes in a binary tree.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t nodes = 0;
if (tree == NULL)
return (0);
nodes += ((tree->left || tree->right) ? 1 : 0);
if (tree->left)
nodes = nodes + binary_tree_nodes(tree->left);
if (tree->right)
nodes = nodes + binary_tree_nodes(tree->right);
return (nodes);
}
