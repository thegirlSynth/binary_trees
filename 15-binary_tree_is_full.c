#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 *
 * @tree: a pointer to the root node of the tree to measure the size
 *
 * Return: the size, of 0 if th etree NULL
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
   		return (0);

	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);

	if (left == right)
    	return (1);
	return (0);
}
