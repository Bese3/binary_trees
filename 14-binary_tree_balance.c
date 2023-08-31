#include"binary_trees.h"


/**
 * binary_tree_balance - function calculates the balance factor
 * of a binary tree by subtracting the height of the right
 * subtree from the height of the left subtree.
 *
 * @tree: The parameter `tree` is a pointer to a binary tree node.
 *
 * Return: the balance factor of a binary tree. The balance factor
 * is calculated by subtracting the height of the right subtree
 * from the height of the left subtree.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
int left_height = 0;
int right_height = 0;
if (tree == NULL)
return (0);
left_height += ((tree->left) ? 1 : 0);
right_height += ((tree->right) ? 1 : 0);
left_height += binary_tree_height(tree->left);
right_height += binary_tree_height(tree->right);
return (left_height - right_height);
}


/**
 * binary_tree_height - function calculates the height of a binary
 * tree by recursively traversing the left and right
 * subtrees and returning the maximum height.
 *
 * @tree: A pointer to the root of a binary tree.
 *
 * Return: the height of the binary tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_height = 0;
size_t right_height = 0;
if (tree == NULL)
{
return (0);
}
if (tree->left)
left_height = 1 + binary_tree_height(tree->left);
if (tree->right)
right_height = 1 + binary_tree_height(tree->right);
if (left_height > right_height)
return (left_height);
return (right_height);
}
