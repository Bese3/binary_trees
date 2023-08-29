#include"binary_trees.h"

/**
 * binary_tree_postorder - function performs a postorder traversal on
 * a binary tree and applies a given function to each
 * node.
 *
 * @tree: A pointer to the root of the binary tree.
 * @func: The parameter "func" is a function pointer that points to a
 * function that takes an integer as an argument and returns void.
 * This function will be called on each node of the binary
 * tree in postorder traversal.
 *
 * Return: nothing (void).
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
return;
binary_tree_postorder(tree->left, func);
binary_tree_postorder(tree->right, func);
func(tree->n);
}
