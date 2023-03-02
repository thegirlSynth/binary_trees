#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 *
 * @tree: a pointer to the root node of the tree to measure the size
 *
 * Return: the size, of 0 if th etree NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int count, left, right;

	count = 0;
	if (tree == NULL)
		return (0);

	left = binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);

	if (tree->left != NULL || tree->right != NULL)
		count += 1 + left + right;

	return (count);
}
