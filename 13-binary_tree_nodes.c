#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in binary tree
 * @tree: Pointer to the root node of the tree to count the number of nodes
 * 
 * Return: Number of nodes with at least 1 child, or 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	
	size_t count = 0;

	if (tree->left != NULL || tree->right != NULL)
		count = 1;

	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);

	return (count);
}
