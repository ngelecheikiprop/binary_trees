#include "binary_trees.h"

/**
 * binary_tree_uncle - ill find your uncle and bring him to you
 *
 * @node: the one looking for his uncle
 * Return: ill come back with his uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || binary_tree_sibling(node->parent) == NULL)
		return (NULL);
	return (binary_tree_sibling(node->parent));
}
/**
 * binary_tree_sibling - finds he sibling of a nde
 *
 * @node: the node to look for its sibling
 *
 * Return: pointer to the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}
