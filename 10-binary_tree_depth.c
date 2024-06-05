#include "binary_trees.h"

/**
 * binary_tree_depth - gets the depth of a node
 * in a binary tree
 *
 * @tree: pointer to node to measure depth
 *
 * Return: the depth of the pointer
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);
	while (tree->parent)
	{
		tree = tree->parent;
		depth++;
	}
	return (depth);
}
