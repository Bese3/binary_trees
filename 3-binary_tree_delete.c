#include"binary_trees.h"


/**
 * binary_tree_delete - The function recursively deletes
 * a binary tree by freeing each node.
 *
 * @tree: The parameter "tree" is a pointer to the
 *  root of a binary tree.
 *
 * Return: the function is returning nothing (void).
 */
void binary_tree_delete(binary_tree_t *tree)
{
if (tree == NULL)
{
return;
}
binary_tree_delete(tree->left);
binary_tree_delete(tree->right);
free(tree);
}
