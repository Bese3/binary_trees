#include"binary_trees.h"

/**
 * binary_tree_leaves - function "binary_tree_leaves" counts
 * the number of leaves in a binary tree.
 *
 * @tree: A pointer to the root of a binary tree.
 *
 * Return: the number of leaves in a binary tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t leaves = 0;
if (tree == NULL)
return (0);
if (tree->left == NULL && tree->right == NULL)
{
leaves++;
return (leaves);
}
if (tree->left)
leaves = leaves + binary_tree_leaves(tree->left);
if (tree->right)
leaves = leaves + binary_tree_leaves(tree->right);
return (leaves);
}
