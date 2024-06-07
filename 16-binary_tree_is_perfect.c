#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *
 * @tree: pointer to root of tree to check
 *
 * Return: 1 for perfect otherwise null
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (binary_tree_is_full(tree) && binary_tree_balance(tree) == 0)
		return (1);
	else
		return (0);
}
/**
 * binary_tree_is_full - checks if a binary tree is full
 *
 * @tree: the pointer to root of the tree to check
 *
 * Return: 0 if not full 1 if full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
}
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
