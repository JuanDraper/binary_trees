#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if node is root
 * @node: node to check
 * Return: 0 if node is NULL of if there is a parent, 1 if node is root
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node || node->parent)
		return (0);
	return (1);
}
