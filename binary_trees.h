#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stdlib.h>

/**
 * struct binary_tree_s - Binary tree node
 * 
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

/**
 * binary_tree_node - Creates a new binary tree node
 * @parent: Pointer to the parent node of the node to create
 * @value: The value to put in the new node
 * 
 * Return: Pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

#endif