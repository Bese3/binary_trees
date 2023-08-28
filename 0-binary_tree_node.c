#include"binary_trees.h"
#include"binary_trees.h"


binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *new_ptr;
new_ptr = malloc(sizeof(binary_tree_t));
if (new_ptr == NULL)
{
free(new_ptr);
return (new_ptr);
}
new_ptr->n = value;
new_ptr->right = NULL;
new_ptr->left = NULL;
new_ptr->parent = NULL;

if (parent != NULL)
new_ptr->parent = parent;
return (new_ptr);
}
