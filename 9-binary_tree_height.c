#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a tree
 *
 * @tree: pointer to the root node to measure height
 *
 * Return: must return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lheight = 0;
	size_t rheight = 0;

	if (tree == NULL)
		return (-1);
	lheight = binary_tree_height(tree->left);
	rheight = binary_tree_height(tree->right);

	if (lheight > rheight)
		return (lheight + 1);
	return (rheight + 1);
}
