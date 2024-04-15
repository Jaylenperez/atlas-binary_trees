#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: Pointer to the node to measure the depth
 * 
 * Return: Depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t left_depth, right_depth;

	if (tree == NULL)
		return (0);
	
	left_depth = binary_tree_depth(tree->left);
	right_depth = binary_tree_depth(tree->right);

	return (left_depth > right_depth ? left_depth : right_depth) + 1;
}
