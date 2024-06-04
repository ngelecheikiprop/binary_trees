#include "binary_trees.h"
/**
 * binary_tree_is_leaf- says if a node is a leaf
 *
 * @node: the node to check
 *Return: 1 if its a leaf 0 if not a leaf
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->right == NULL && node->left == NULL)
		return (1);
	else
		return (0);
}
