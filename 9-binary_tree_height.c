#include "binary_trees.h"

/**
 * binary_tree_height - a function that measures th eheight of a binary tree
 *
 * @tree: a pointer to the root node of the tree to measure the height
 *
 * Return: the height, or 0 if tree is NULL
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
