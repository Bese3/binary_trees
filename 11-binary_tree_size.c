#include"binary_trees.h"

/**
 * binary_tree_size - function calculates the size of a binary
 * tree by recursively counting the number of nodes in the
 * tree.
 *
 * @tree: The parameter "tree" is a pointer to a binary tree structure.
 *
 * Return: the size of the binary tree,
 * which is the number of nodes in the tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
size_t size = 0;
if (tree == NULL)
return (0);
size++;
if (tree->left)
size += binary_tree_size(tree->left);
if (tree->right)
size += binary_tree_size(tree->right);
return (size);
}
