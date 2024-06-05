#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of a binary tree
 *
 * @tree: pointer to the node of the tree to measure size
 *Return: return 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t lsize = 0;
	size_t rsize = 0;

	if (tree == NULL)
		return (0);
	lsize = binary_tree_size(tree->left);
	rsize = binary_tree_size(tree->right);
	return (lsize + rsize + 1);
}
