#include"binary_trees.h"


/**
 * binary_tree_preorder - function performs a preorder traversal
 * on a binary tree and applies a given function to each
 * node.
 *
 * @tree: A pointer to the root of the binary tree.
 * @func: The parameter `func` is a function pointer that points
 * to a function that takes an integer as an argument and returns
 * void. This function will be called on each node of the binary
 * tree in a preorder traversal.
 *
 * Return: In this code snippet, nothing is being returned.
 * The function has a void return type, which
 * means it does not return any value.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
return;
func(tree->n);
binary_tree_preorder(tree->left, func);
binary_tree_preorder(tree->right, func);
}
