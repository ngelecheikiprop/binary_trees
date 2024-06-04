#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node
 *as the left-child of another node
 *
 * @parent: pointer to the node to insert child
 * @value: value to store in the node
 *
 * Return: Pointer to the created node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL || parent == NULL)
		return (NULL);
	newNode->n = value;
	if (parent->left != NULL)
	{
		newNode->left = parent->left;
		parent->left = newNode;
	}
	else
		parent->left = newNode;

	return (newNode);
}
