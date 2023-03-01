#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 *
 * @node: a pointer to the node to find the uncle
 *
 * Return: a pointer to the uncle node
 * if node is NULL return NULL, if node has no uncle, return NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandparent, *parent, *uncle;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	parent = node->parent;
	grandparent = node->parent->parent;
	if (grandparent == NULL)
		return (NULL);

	if (grandparent->left == parent)
		uncle = grandparent->right;
	else
		uncle = grandparent->left;

	return (uncle);
}
