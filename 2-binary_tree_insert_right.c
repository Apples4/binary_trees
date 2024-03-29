#include "binary_trees.h"
/**
 * binary_tree_insert_right - add a node in the right of the parent
 * @parent: parent of the specified node
 * @value: value of the node
 * Return: NULL if it fails or the node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

        node = malloc(sizeof(binary_tree_t));                             
        if (node == NULL)                                                 
                return (NULL);                                            
        node->n = value;                                                  
        node->parent = parent;                                            
        node->left = NULL;                                               
        node->right = parent->right;                                        

	if (parent->right != NULL)
	{
		node->right->parent = node;
	}
	parent->right = node;
	return (node);
}
