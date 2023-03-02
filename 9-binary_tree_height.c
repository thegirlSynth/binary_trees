#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t tree_left_height;
	size_t tree_right_height;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	tree_left_height = binary_tree_height(tree->left);
	tree_right_height = binary_tree_height(tree->right);

	if (tree_left_height > tree_right_height)
		return (tree_left_height + 1);
	else
		return (tree_right_height + 1);
}
