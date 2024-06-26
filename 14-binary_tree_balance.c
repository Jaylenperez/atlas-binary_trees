#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure the balance factor
 * 
 * Return: Balance factor of the tree, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
    size_t left_height, right_height;

    if (tree == NULL)
        return (0);
    
    left_height = binary_tree_height(tree->left);
    right_height = binary_tree_height(tree->right);
    
    return (int)(left_height - right_height);
}
