#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *
 * @tree: pointer to the tree
 *
 * Return: 1 if perfect, otherwise 0.
 * if tree is NULL return 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left, right, full;

	if (!tree)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	full = binary_tree_is_full(tree);

	if ((left == right) && full)
		return (1);

	return (0);
}

/**
 * binary_tree_height - a function that measures th eheight of a binary tree
 *
 * @tree: a pointer to the root node of the tree to measure the height
 *
 * Return: the height, or 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
        int left, right, height;

        if (tree == NULL)
                return (-1);

        left = binary_tree_height(tree->left);
        right = binary_tree_height(tree->right);

        if (left > right)
                height = left + 1;
        else
                height = right + 1;

        return (height);
}

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
        if (tree->left == NULL && tree->right != NULL)
                return (0);
        if (tree->left != NULL && tree->right == NULL)
                return (0);
        if (tree->left == NULL && tree->right == NULL)
                return (1);

        left = binary_tree_is_full(tree->left);
        right = binary_tree_is_full(tree->right);

        if (left == 0 || right == 0)
                return (0);

        return (1);
}
