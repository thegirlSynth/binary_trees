#include "binary_trees.h"

/**
 * binary_tree_postorder - go through a binary tree using post-order traversal
 *
 * @tree: a pointer to the root of the tree to traverse
 * @func: a pointer to a function call for each node
 *
 * Return: nothing
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
