#include "binary_trees.h"

int search_node(const binary_tree_t *node, const binary_tree_t *search);

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 *
 * @first: a pointer to the first node
 * @second: a ponter to the second node
 *
 * Return: return a pointer to the lowest common ancestor node
 * of the two given nodes.
 * If no common ancestor found, return NULL
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	int found;
	binary_tree_t *ancestor;

	if (first == NULL || second == NULL)
	{
		return (NULL);
	}


	found = search_node(first, second);
	if (found)
	{
		return (first);
	}

	ancestor = binary_trees_ancestor(first->parent, second);

	return (ancestor);
}

/**
 * search_node - search for a node in a binary tree
 *
 * @node: the tree to search in
 * @second: the node to find
 *
 * Return: 1 if found, otherwise 0
 */

int search_node(const binary_tree_t *node, const binary_tree_t *second)
{
	int left, right;

	if (node == NULL)
		return (0);

	if (node == second)
	{
		return (1);
	}
	left = search_node(node->left, second);
	right = search_node(node->right, second);

	if (left || right)
		return (1);
	else
		return (0);
}
