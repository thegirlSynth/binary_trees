#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: number of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	count = binary_tree_nodes(tree->left);
	count = binary_tree_nodes(tree->right);

	if (tree->left)
		count += 1;
	if (tree->right)
		count += 1;
	return (count);
}
