#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 *
 * @tree: a pointer to the root node of the tree to delete
 *
 * Return: nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *head, *left, *right;

	if (tree == NULL)
		return;

	head = tree;
	left = tree->left;
	right = tree->right;

	free(head);
	binary_tree_delete(left);
	binary_tree_delete(right);
}
