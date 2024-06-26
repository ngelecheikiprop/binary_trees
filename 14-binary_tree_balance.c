#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance fatcor of a binary tree
 *
 * @tree: pointer to the root node of the tree
 *
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;

	if (tree == NULL)
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	return (left_height - right_height);
}
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
	return (-1);
}
