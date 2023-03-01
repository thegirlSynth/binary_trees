#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_delete - Deletes an entire binary tree
 * @tree: Pointer to the root node of the tree to delete
 *
 * Return: Nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
    binary_tree_t *temp;

    if (tree == NULL)
        return;
        
    while (tree->left != NULL)
    {
        temp = tree->left;
        binary_tree_delete(temp);
    }

    while (tree->right != NULL)
    {
        temp = tree->right;
        binary_tree_delete(temp);
    }

    free(tree);
    return;
}