#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balancing
 * factor of a binary tree
 *
 * @tree: a pointer to the root of the tree to
 * measure the balacing factor
 *
 * Return: the factor, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int factor;

	if (tree == NULL)
		return (0);

	factor = binary_tree_height(tree->left) - binary_tree_height(tree->right);

	return (factor);
}

/**
 * binary_tree_height - finds the height of a binary tree
 *
 * @tree: the tree
 *
 * Return: the height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int left, right, height;

	if (tree == NULL)
		return (-1);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left > right)
		height = left + 1;
	else
		height = right + 1;

	return (height);
}
