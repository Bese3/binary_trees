#include"binary_trees.h"

/**
 * binary_tree_inorder - function performs an inorder traversal
 * of a binary tree and applies a given function to each
 * node.
 *
 * @tree: A pointer to the root of a binary tree.
 * @func: The "func" parameter is a function pointer that points
 * to a function that takes an integer as an argument and returns
 * void. This function will be called on each node of the binary
 * tree in the inorder traversal.
 *
 * Return: nothing is being returned.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
return;
binary_tree_inorder(tree->left, func);
func(tree->n);
binary_tree_inorder(tree->right, func);
}
