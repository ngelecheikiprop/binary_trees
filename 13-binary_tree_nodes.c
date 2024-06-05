#include "binary_trees.h"
size_t binary_tree_size(const binary_tree_t *tree);
size_t binary_tree_leaves(const binary_tree_t *tree);
/**
 * binary_tree_nodes - counts the nodes with atleast 1 child
 *
 * @tree: pointer to the root node of the tree to count
 *
 *Return:number of node with 1 child
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_size(tree) - binary_tree_leaves(tree));
}

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
