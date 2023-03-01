#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 *
 * @tree: a pointer to the root node of the tree to measure the size
 *
 * Return: the size, of 0 if th etree NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	int count, left, right;

	if (tree == NULL)
		return (0);

	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);

	count = left + right;

	return (count + 1);
}
