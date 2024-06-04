#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as
 *the right-child of another node
 *@parent: node to insert the right child in
 *@value: value to store in the new node
 *
 * Return: pointer to the created node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL || parent == NULL)
		return (NULL);
	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;
	if (parent->right)
	{
		parent->right->parent = newNode;
		newNode->right = parent->right;
		parent->right = newNode;
	}
	else
		parent->right = newNode;

	return (newNode);
}
