#include "binary_trees.h"

/**
 * binary_tree_leaves - counts leaves in a binary tree
 *
 * @tree: pointer to root node to count the number
 * of leaves
 *
 * Return: number of leaves and 0 if tree is null
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t rleaves = 0;
	size_t lleaves = 0;
	if (tree->right == NULL && tree->left == NULL)
		return (1);

	if (tree->right)
		rleaves = binary_tree_leaves(tree->right);
	if (tree->left)
		lleaves = binary_tree_leaves(tree->left);
	return (rleaves + lleaves);
}
