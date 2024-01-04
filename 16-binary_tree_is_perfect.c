#include "binary_trees.h"
/**
 * tree_is_perfect - function that says if a tree is perfect or not
 * each node has to have 2 nodes or none
 * @tree: tree to check
 * Return: 0 - perfect or other number that is the level of height
 */
int tree_is_perfect(const binary_tree_t *tree)
{
	int l = 0, r = 0;

	if (tree->left && tree->right)
	{
		l = 1 + tree_is_perfect(tree->left);
		r = 1 + tree_is_perfect(tree->right);
		if (r == l && l != 0 && r != 0)
			return (r);
		return (0);
	}
	else if (!tree->left && !tree->right)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * binary_tree_is_perfect - perfect or not a tree
 * @tree: tree to check
 * Return: 1 is it is or 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int sum = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		sum = tree_is_prefect(tree);
		if (sum != 0)
		{
			return (1);
		}
		return (0);
	}
}


























int binary_tree_is_perfect(const binary_tree_t *tree)
