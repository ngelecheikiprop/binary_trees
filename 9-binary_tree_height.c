#include "binary_trees.h"
size_t max(size_t a, size_t b);
/**
 * binary_tree_height - measures the height of a tree
 *
 * @tree: pointer to the root node to measure height
 *
 * Return: must return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (tree)
	{
		if (tree->left)
		{
			left = 1 + binary_tree_height(tree->left);
		}
		if (tree->right)
		{
			right = 1 + binary_tree_height(tree->right);
		}
		return ((left > right) ? left : right);
	}
	return (0);
}
