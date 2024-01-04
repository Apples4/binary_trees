#include "binary_trees.h"

/**
 * binary_tree_insert_left - add a node in the left of the parent
 * @parent: parent of the specified node
 * @value: value of the node
 * Return: NULL if it fails or the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	node->n = value;
	node->parent = parent;
	node->right = NULL;
	node->left = parent->left;

	if (parent->left != NULL)
	{
		node->left->parent = node;
	}
	parent->left = node;
	return (node);
}

