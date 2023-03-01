#include "binary_trees.h"

/**
 * binary_tree_depth - a function that measures th depth of a binary tree
 *
 * @tree: a pointer to the root node of the tree to measure the height
 *
 * Return: the height, or 0 if tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	int head, depth;

	if (tree == NULL)
	{
		return (-1);
	}

	head = binary_tree_depth(tree->parent);

	depth = head + 1;

	return (depth);
}
