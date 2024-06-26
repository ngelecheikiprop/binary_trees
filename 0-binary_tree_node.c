#include "binary_trees.h"

/**
 * binary_tree_node - creats a new node
 *
 * @parent: the parent of the node
 * @value: the value of the node
 *
 * Return: pointer to the new node or NULL if it fails
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
		return (NULL);
	newNode->parent = parent;
	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;
	return (newNode);
}
