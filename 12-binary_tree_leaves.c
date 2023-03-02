#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves_num = 0;

	if (tree == NULL)
		return (0);

	leaves_num += binary_tree_leaves(tree->left);
	leaves_num += binary_tree_leaves(tree->right);
	if (tree->left == NULL && tree->right == NULL)
		leaves_num += 1;

	return (leaves_num);
}
