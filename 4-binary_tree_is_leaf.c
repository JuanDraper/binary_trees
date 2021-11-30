#include "binary_trees.h"
/*
 * binary_tree_is_leaf - checks if a node is leaf
 * @node: node to check
 * Return: 0 if not leaf or node is NULL, 1 if node is leaf
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node || node->left || node->right)
	       return (0);
	return (1);
}	
