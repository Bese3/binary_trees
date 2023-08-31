#include"binary_trees.h"


/**
 * binary_tree_is_full - function checks if a binary tree is full,
 * meaning every node has either two children or no
 * children.
 *
 * @tree: The parameter `tree` is a pointer to a binary tree node
 * of type `binary_tree_t`.
 *
 * Return: an integer value, which represents whether the binary
 * tree is full or not. If the binary tree is full, the function
 * will return 1. If the binary tree is not full, the function will
 * return 0.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
static int full = 1;
if (tree == NULL)
return (0);

full = ((!tree->right && tree->left) ? 0 : 1);
full = (((tree->right) && (!tree->left)) ? 0 : 1);

if (full == 0)
return (0);

binary_tree_is_full(tree->left);
binary_tree_is_full(tree->right);

return (full);
}
