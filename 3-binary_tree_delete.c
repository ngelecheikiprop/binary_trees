#include "binary_trees.h"

/**
 * binary_tree_delete - deletes a binary tree
 * you worked so hard for
 *
 * @tree: pointer to the root node
 *
 * Return: it doesnt even care to return anything
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(tree->left);
	free(tree);
	binary_tree_delete(tree->right);
}
